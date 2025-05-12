#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6};

    /*
    //All three are same thing
    cout << "1st " << *(arr + 1) << endl;
    cout << "2nd " << 1[arr] << endl;
    cout << "3rd " << arr[1] << endl;
    */

    /*
    int temp[10];
    int *ptr = &temp[0];
    cout << sizeof(temp) << endl; // 40
    cout << sizeof(ptr) << endl;  // 4
    cout << sizeof(*ptr) << endl;  // 4
    */

    int a[20] = {1, 2, 3, 4};
    int *p = a;
    cout << p << endl;
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;
    cout << *a << endl;

    return 0;
}