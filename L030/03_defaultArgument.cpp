#include <iostream>
using namespace std;

void print(int arr[], int n, int start = 0){
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    print(arr, 5);
    print(arr, 5, 1);
    cout << (35 << 2);
    return 0;
}