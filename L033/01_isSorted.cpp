#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
    // Base Case:
    if(size == 0 || size == 1)
        return true;

    if(arr[0] > arr[1])
        return false;
    else
        return isSorted(arr + 1, size - 1);
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 5}, arr2[] = {1, 2, 3, 4, 7, 2, 3, 3};
    cout << "Is arr1 sorted? " << (isSorted(arr1, sizeof(arr1)/sizeof(arr1[0]))? "Yes" : "No") << endl;
    cout << "Is arr2 sorted? " << (isSorted(arr2, sizeof(arr2)/sizeof(arr2[0]))? "Yes" : "No") << endl;
    
    return 0;
}