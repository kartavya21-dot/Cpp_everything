#include <iostream>
using namespace std;

int main()
{
    string s = "aaa";
    int ans = 0, zor = 0, n = s.size();
    int i, j;
    if (n == 1)
    {
        // return "YES";
    }

    // for (i = 0; i <= n / 2; i++)
    // {

    //     for (j = i + 1; j < n; j++)
    //     {
    //         if (s[i] != s[j])
    //         {
    //             ans++;
    //         }
    //     }
    // }
    // cout << ans ;

    for ( i = 0; i < n; i++)
    {
        zor = zor ^ s[i];
    }
    cout << endl << zor;
    // int t = ((3*n*n) - (4*n) + 1);
    // cout << endl << t/8;
    // cout << endl << (1/8)*((3*n*n) - (4*n) + 1);

        return 0;
}