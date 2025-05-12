#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if (n<0)
    {
        n = n*(-1);
    }

    float dec = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1; 
        dec = (bit * pow(10, i)) + dec;
        n = n >> 1;
        i++;
    }
}