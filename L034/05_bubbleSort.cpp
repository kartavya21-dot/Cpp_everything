#include <iostream>
using namespace std;

void sortArray(int arr[], int n){
    if(n == 0 || n == 1) return;

    // 1 case solve karlia: largest element at the last
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i], arr[i + 1]);
        }
    }

    sortArray(arr, n - 1);

}

int main()
{
    int arr[] = {1, 2, 4, 5, 9, 2, 1, 34, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, n);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}