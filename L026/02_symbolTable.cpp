#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0};
//    arr = arr + 1;  //Error

    int *ptr = &arr[10];
    ptr = ptr + 1;
    cout << ptr << endl; 

    return 0;
}