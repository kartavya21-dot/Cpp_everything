#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    float a, b, c;
    cin>>a>>b>>c;
    double D;

    if (a==0)
    {
        cout<<"Root is: "<< (-1*c)/b;
    }
    else
    {
        D = sqrt((b*b)-4*a*c);
        if (D==0)
        {
            cout<<"Roots are"<< (-1*b)/(2*a);
        }
        else if(D>0)
        {
            cout<<"Roots are : "<< ((-1*b)-D)/(2*a)<<" & "<<((-1*b)+D)/(2*a);
        }
        else
        {
            cout << "Roots are Complex";
        }
        
    }
    
    return 0;
}