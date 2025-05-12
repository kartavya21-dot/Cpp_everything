#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivotEle = arr[s], count = 0;

    for(int i = s + 1; i <= e; i++){
        if(arr[i] <= pivotEle)
            count++;
    }

    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){

        // if(arr[i] >= pivotEle && arr[j] < pivotEle)
        //     swap(arr[i++], arr[j--]);
        // else if(arr[i] <= pivotEle && arr[j] > pivotEle){
        //     i++;
        //     j--;
        // }else if(arr[i] >= pivotEle && arr[j] > pivotEle){
        //     j--;
        // }else if(arr[i] <= pivotEle && arr[j] < pivotEle){
        //     i++;
        // }

        // Better Code
        while(arr[i] < pivotEle){
            i++;
        }
        while(arr[j] > pivotEle){
            j--;
        }    
        
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
        

        // cout << arr[i] << " " << arr[j] << endl;
    }

    return pivotIndex;

}

void quickSort(int arr[], int s, int e){
    // Base Case
    if(s >= e) return;

    // Partition
    int pivotIndex = partition(arr, s, e);

    // Recurse
    quickSort(arr, s, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, e);
    
}

int main()
{
    int arr[] = {43, 595, 348, 857, 684, 94, 108, 542, 732, 655, 563, 434, 964, 92, 680, 434, 321, 966, 835, 774, 65, 984};
    int size = sizeof(arr) / sizeof(int);
    quickSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
// 43 65 92 94 108 321 348 542 434 434 563 595 655 680 684 732 774 835 857 964 966 984
// 43 65 92 94 108 321 348 434 434 542 563 595 655 680 684 732 774 835 857 964 966 984