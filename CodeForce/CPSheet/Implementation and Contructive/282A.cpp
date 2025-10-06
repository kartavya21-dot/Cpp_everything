#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    while(n > 0){
        string a;
        cin >> a;
        if(a[1] == '-') ans--;
        if(a[1] == '+') ans++;
        n--;
    }
    cout << ans;
    return 0;
}