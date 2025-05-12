#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    bool k = 0;
    for (int i = 1; i < n ; i++)
    {
        k = 0;
        //for rounds 1 to n - 1
        cout << i << ".";
        for (int j = 0; j < n - i; j++)
        {
            //process till n - 1 index
            cout << j << "  ";
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                k = 1;
            }
        }
        cout << endl;
        if (k == 0)
        {
            break;
        }
        
    }
    
}

int main()
{
    // int a[] = { 1, 10, 14, 7, 6};
    int a[] = {1, 2, 3, 4};

    bubbleSort(a, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}