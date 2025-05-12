#include <iostream>
using namespace std;

void merge(int arr[], int s, int e){
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;
    for(int i = 0; i < len1; i++)
        first[i] = arr[k++];

    k = mid + 1;
    for(int i = 0; i < len2; i++)
        second[i] = arr[k++];

    k = s;
    int i = 0, j = 0;
    while(i < len1 && j < len2){
    

        arr[k++] = first[i] < second[j] ? first[i++] : second[j++];
        // if(first[i] < second[j])
        //     arr[k++] = first[i++];
        // else
        //     arr[k++] = second[j++];
    }
    while(i < len1)
        arr[k++] = first[i++];
    while(j < len2)
        arr[k++] = second[j++];

}
void mergeSort(int arr[], int s, int e){
    if(s >= e)
        return;

    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    
    merge(arr, s, e);
}

int main()
{
    int arr[] = {89, 2, 7, 3, 67, 43, 42, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]), s = 0, e = n - 1;
    mergeSort(arr, s, e);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}