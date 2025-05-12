#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n)
{

    for (int i = 0; i < n; i+=2)
    {
        if ((i + 1) < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    // int brr[] = {1, 2, 3, 4, 5, 6};
    // swapAlternate(arr, 5);
    // swapAlternate(brr, 6);

    // printArray(arr, 5);
    // printArray(brr, 6);

    return 0;
}