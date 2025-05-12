#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for ( i = 0; i < 6; i++)
    {
        for ( j = 0; j < 2*i + 1; j++)
        {
            if (j%2 == 0)
            {
                cout<<"*";
            }
            else{
                cout<<"+";
            }
        }
        cout<<endl;
    }
    
    return 0;
}