#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)    //more than one conditon and variabale can print
    {
        cout << i << endl;
    }

    int i = 0;                 
    for (;;)          //both workks fine
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else{
            break;    
        }
        i++;
    }
}