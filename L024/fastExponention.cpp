#include <iostream>
using namespace std;

int pow(int x, int n){
    int res = 1;
    
    while (n != 0)
    {
        if(n & 1)
            res *= x;

        x = x * x;
        n = n >> 1;
    }

    return res;
    
}

int main()
{
    cout << pow(3, 9);
    return 0;
}