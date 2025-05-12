#include <iostream>
using namespace std;
//    *
//    **
//    ***
//    ****
int main()
{
    int n;
    cin>>n;
    
    int i = 1;
    while (i<=n)
    {
        //space print karlo
        int space = n - 1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        //star print karo
        int j = 1;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        cout <<endl;
        i++;
    }
    

}