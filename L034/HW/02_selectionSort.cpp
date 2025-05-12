#include <iostream>
using namespace std;

void sortArray(int arr[], int n){
    if(n == 0 || n == 1)
        return;
        
    int min = 0;
    for(int i = 1; i < n; i++){
        if(arr[min] > arr[i])
            min = i;
    }
    swap(arr[0], arr[min]);
    return sortArray(arr + 1, n - 1);
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