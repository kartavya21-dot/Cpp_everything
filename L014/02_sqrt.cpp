#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int s = 0, x , e, i=0, ans[11] ;
    // x = pow(2, 31) - 1;
    x = 198;
    e = x/2;
    int m = s + (e - s) / 2;

    cout << m << endl;
    while (s < e )
    {
        // cout << "I am in" << endl;
        if (m * m == x)
        {
            cout << m << " * " << m << " = " << x << endl;
            break;
        }
        else if (m * m < x)
        {
            s = m + 1;
            ans[i] = m;
            i++;
        }
        else
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }

    cout << m << " * " << m << " = " << x << endl;
    for ( i = 0; i < 11; i++)
    {
        cout << ans[i] << " ";
    }
    
    return 0;
}