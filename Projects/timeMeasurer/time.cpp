#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>
#include <numeric>
using namespace std;
using namespace std::chrono;

// Your function to test
void fn(){
    int dummy = 0;
    for(int i = 0; i < 30; i++){
        // for(int j = 0; j < 30; j++){
        //     cout << ""; 
        // }
        dummy++;
    }
}

// Better measurement with warmup and multiple runs
microseconds measure(int n, int warmup = 3, int runs = 5){
    // Warmup runs (avoid cold start)
    for(int i = 0; i < warmup; i++){
        int t = n;
        while(t--) fn();
    }
    
    // Actual measurements
    vector<long long> durations;
    for(int r = 0; r < runs; r++){
        auto start = high_resolution_clock::now();
        int t = n;
        while(t--) fn();
        auto end = high_resolution_clock::now();
        durations.push_back(duration_cast<microseconds>(end - start).count());
    }
    
    // Return median (more robust than mean)
    sort(durations.begin(), durations.end());
    return microseconds(durations[runs / 2]);
}

int main()
{
    vector<pair<int, long long>> results;
    
    // More granular testing
    vector<int> test_sizes = {10, 50, 100, 500, 1000, 5000, 10000, 50000, 100000};
    
    cout << "Running benchmarks..." << endl;
    for(int n : test_sizes){
        microseconds duration = measure(n);
        results.push_back({n, duration.count()});
        cout << "n=" << n << " -> " << duration.count() << "µs" << endl;
    }
    
    // CSV output for Python analysis
    cout << "\n# Copy to Python:" << endl;
    cout << "ns = [";
    for(size_t i = 0; i < results.size(); i++){
        cout << results[i].first << (i < results.size()-1 ? ", " : "");
    }
    cout << "]" << endl;
    
    cout << "times = [";
    for(size_t i = 0; i < results.size(); i++){
        cout << results[i].second << (i < results.size()-1 ? ", " : "");
    }
    cout << "]" << endl;

    return 0;
}