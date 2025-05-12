#include <iostream>
using namespace std;

int main()
{
    int a[] = {-1, -2, -3, -4};

    int s = 0, e = 3, m = (e + s) / 2;
    int ans, y = e;

    while (s <= e)
    {
        if (a[m] >= 0)
        {
            ans = m;
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
        m = (e + s) / 2;
    }

    cout << ans;
    return 0;
}