#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // int a = n%10;
    // int b = (n/10)%10;
    // int c = n/100;             

    // cout<<"Product is:"<<a*b*c<<endl;         //only works for 3 digit no.
    // cout<<"Sum is:"<<a+b+c<<endl;

    int sum = 0;
    int product = 1;
    while (n>0)
    {
        int rem = n%10;
        product = product * rem;
        sum = sum + rem;
        n = n/10;
    }
    cout<<"Product is:"<<product<<endl;
    cout<<"Sum is:"<<sum<<endl;

    
}