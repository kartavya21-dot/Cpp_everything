#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

double dist(int x, int y, int a, int b){

    double first = (x - a) * (x - a);
    double second = (y - b) * (y - b);

    return sqrt(first + second);
}

string solve(vector<int>& arr, int a, int b, int x, int y){
    // for(int i : arr){
    //     sum += i;
    //     exored ^= i;
    // }
    arr.push_back(ceil(dist(x, y, a, b)));
    sort(arr.begin(), arr.end());
    double sum = arr[arr.size() - 1];

    for(int i = 0; i < arr.size() - 1; i++){
        sum -= arr[i];
    }

    return (sum <= 0) ? "yes" : "no";


    // if(a == x && b == y){
    //     return exored == 0 ? "yes" : "no";
    // }

    // return sum >= dist(x, y, a, b) ? "yes" : "no";

}

int main()
{
    int t;
    cin >> t;

    while(t > 0){
        int n, a, b, x, y;
        cin >> n >> a >> b >> x >> y;

        vector<int> arr(n);
        for(int& i : arr)    cin >> i;
        cout << solve(arr, a, b, x, y) << "\n";

        t--;
    }

    return 0;
}