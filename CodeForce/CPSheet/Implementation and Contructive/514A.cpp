#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long solve(long long n){
    vector<int> v;
    while(n > 0){
        v.push_back(n % 10);
        n /= 10;
    }
    n = 0;
    int s = v.size();
    // cout <<"Size" << s << endl;
    for(int i = s - 1; i >= 0; i--){
        int e = v[i];
        if(e > 4){
            if(i == s - 1 && e == 9){
                continue;
            }  
            v[i] = 9 - e;
        }
    }
    for(int i = s - 1; i >= 0; i--){
        n = n * 10 + v[i];
    }
    return n;
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n);
    return 0;
}