#include <iostream>
using namespace std;

void sortArray(int arr[], int size){
    if(size == 0 || size == 1)
        return;

    int temp = arr[1];
    int j = 0;
    while(j >= 0){
        
    }
        
}
int main()
{
    int arr[] = {8, 2, 5, 52, 6, 7, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, size);

    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}