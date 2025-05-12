#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;
   
    //BITWISE OPERATOR
    cout<< "a&b: "<< (a&b) << endl;  //AND
    cout<< "a|b: "<< (a|b) << endl ;  //OR
    cout<< "~a: "<< ~a << endl;      //NOT
    cout<< "a^b: "<< (a^b) << endl;  //XOR

    //LEFT AND RIGHT SHIFT
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(21>>1)<<endl;
    cout<<(21>>2)<<endl;

    //INCREMENT AND DECREMENT OPERATOR
    int i = 7;
    cout<<(++i)<<endl; //8, and i=8
    cout<<(i++)<<endl; //8, and i=9
    cout<<(i--)<<endl; //9, and i=8
    cout<<(--i)<<endl; //7, i=7

    


}