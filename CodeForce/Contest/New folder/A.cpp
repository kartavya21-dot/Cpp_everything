#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solve(vector<int>& sub, int n){
    int m = sub.size();
    if(m == 1){
        return n - sub[0] + 1;
    }
    if(sub[0] < sub[1]){
        int lastEle = sub[m-1];
        return n - lastEle + 1;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while(t > 0){
        int n, m;
        cin >> n >> m;
        vector<int> sub(m, 0);
        for(int i = 0; i < m; i++){
            int a;
            cin >> a;
            sub[i] = a;
        }
        cout << solve(sub, n) << "\n";
        t--;
    }
    return 0;
}