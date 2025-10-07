#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n = 5, m = 5, ix = 0, iy = 0;
    while(n){
        m = 5;
        while(m){
            int e;
            cin >> e;
            if(e == 1){
                ix = n;
                iy = m;
            }
            m--;
        }
        n--;
    }
    int ans;

    ans = abs(ix - 3) + abs(iy - 3);

    cout << ans << "\n";
    return 0;
}