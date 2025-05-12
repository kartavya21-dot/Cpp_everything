#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    // address of Operator : &

    cout << "Address of num is: " << &num << endl;

    int *ptr = &num;
    double num2 = 3.5;
    double *p2 = &num2;

    cout << "Address of num  is: " << ptr << endl;
    cout << "Value is: " << *ptr << endl;
    cout << "Size of pointer is: " << sizeof(ptr) << endl; //here it is 4
    cout << "Size of (double)pointer is: " << sizeof(p2) << endl; //here also 4
    
    return 0;
}