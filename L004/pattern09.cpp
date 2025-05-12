#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    // while (row <= n)
    // {
    //     int value = row;
    //     int clm = 1;
    //     while (clm <= row)
    //     {
    //         cout << value;
    //         value--;
    //         clm++;
    //     }
    //     row++;
    //     cout<<endl;
    // }

while (row <= n)          //alternate way
    {
        int clm = 1;
        while (clm <= row)
        {
            cout <<" "<< row - clm +1;
            clm++;
        }
        row++;
        cout<<endl;
    }
}