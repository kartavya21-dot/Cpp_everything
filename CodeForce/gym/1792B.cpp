#include <iostream>
using namespace std;

int solve(int a, int b, int c, int d){
    if(a == 0){
        return 1;
    }
    int ans = a;
    if(b < c){
        ans += 2 * (b);
        c -= b;
        b = 0;
    }else{
        ans += 2 * (c);
        b -= c;
        c = 0;
    }

    if(a + 1 <= d){
        return ans += a + 1;
    }else{
        ans += a + 1;
        a = a - d;
        if(b > a || c > a)  ans += a;
    }

    return ans;

}

int main()
{
    int t;
    cin >> t;
    while(t != 0){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << solve(a, b, c, d) << "\n";
        t--;
    }
    return 0;
}