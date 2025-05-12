#include <iostream>
using namespace std;

long long power(int x, int n){
    if(n == 0)
        return 1;
    
    if(n&1){
        n = n >> 1;
        return x * power(x * x, n);
    }else{
        n = n >> 1;
        return power(x * x, n);
    }    
}

int main()
{
    int x = 3, n = 11;
    cout << power(x, n);  // Output: 129793650684161
    
    return 0;
}