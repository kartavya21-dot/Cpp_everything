#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int arr[3][4] = {{1, 1, 1, 1}, {1, 0, 0, 1}, {1, 1, 1, 1}};

    int n = 3, m = 4;

    int sum = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     int factor = 1;
    //     for (int j = m - 1; j >= 0; j--)
    //     {
    //         sum += arr[i][j] * factor;
    //         factor *= 2;
    //     }

    //     cout << "sum of: " << sum << endl;
        
    // }

        int s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j--)
        {
        cout << "at arr[i][j]: " << arr[i][j] << endl;
            if(arr[i][j] == 1)
                s += pow(2, j);
        }

        cout << "sum of: " << s << endl;
        
    }
    

        cout << "sum of: " << s << endl;
    
    

    return 0;
}