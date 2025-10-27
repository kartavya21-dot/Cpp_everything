#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int n){
    vector<int> v;
    int num = n, fact = 1;

    while(num != 0){
        int ele = fact * (num % 10);
        num /= 10;
        fact *= 10;
        if(ele == 0)    continue;
        v.push_back(ele);
    }

    cout << v.size() << endl;
    for(int i : v)
        if(i != 0)  cout << i << " ";
    
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        solve(n);
        t--;
    }
    return 0;
}