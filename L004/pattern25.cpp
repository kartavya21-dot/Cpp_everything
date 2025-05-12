#include <iostream>
using namespace std;
//    1
//   121
//  12321
// 1234321
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        int k = i;
        while (k > 1)
        {
            cout << k-1;
            k--;
        }
        i++;
        cout << endl;
    }
}