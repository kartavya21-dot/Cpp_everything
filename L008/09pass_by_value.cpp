#include <iostream>
using namespace std;

void dummy(int n){
    n++;
    cout << "n is " << n << endl;
}



int main()
{
    int n;
    cin >> n;

    dummy(n);

    cout << "number n is " << n << endl;
    // o/p is
    // n is 4
    // number n is 3
    // "n" dono function me alag-alag hai, dono ke liye separate memmory ban rhi hai, isi karan se uss 'n' me change karne se isme koi badlav nahi aaya   => aka pass by value
    return 0;
}