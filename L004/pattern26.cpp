#include <iostream>
using namespace std;
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
int main()
{
    int n; 
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }

        int k = 1;
        while (k <= i - 1)
        {
            cout << "**";
            k++;
        }

        int l = n;
        while (l <= n && l-i+1>0)
        {
            cout << l - i + 1;
            l--;
        }

        i++;
        cout << endl;
    }
}