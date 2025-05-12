#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char s;
    cin>>a>>s>>b;

    if (s == '+')
    {
        cout<<a+b;
    }
    if (s == '-')
    {
        cout<<a-b;
    }
    if (s == '*')
    {
        cout<<a*b;
    }
    if (s == '/')
    {
        cout<<a/b;
    }
    
}