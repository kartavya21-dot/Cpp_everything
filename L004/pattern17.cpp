#include <iostream>
using namespace std;
// E
// DD
// CCC
// BBBB
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        char ch = n + 'A' - i ;
        int j = 1;
        while (j <= i)
        {
            cout << ch;
            j++;
            ch++;
        }
        i++;
        cout << endl;
    }
}