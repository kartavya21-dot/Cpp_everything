#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long i=2;
    bool f = 1;
    while (i<n)
    {
        if (n%i==0)
        {
            f = 0;
        }
        i++;
    }
    f == 0 ? cout<<"Not prime"<<i<<endl : cout << "Prime";
}