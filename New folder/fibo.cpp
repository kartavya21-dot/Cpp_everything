#include <iostream>
using namespace std;

int fib(int n){
    if(n == 0){
        cout << "0";
        return 0;
    }

    fib(n - 1);
    cout << fib(n);
    return 0;
}

int main()
{
    int n = 5, n1 = 0, n2 = 1;
    fib(5);
    

    return 0;
}