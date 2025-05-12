#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size, int sum=0){
    if(size == 0)
        return sum;
    sum += arr[0];
    return sumOfArray(arr + 1, size - 1, sum);
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    cout << "Sum of array elements: " << sumOfArray(arr, sizeof(arr)/sizeof(arr[0]));  // sizeof(arr)/sizeof(arr[0]) gives the size of the array arr in terms of elements.
    return 0;
}