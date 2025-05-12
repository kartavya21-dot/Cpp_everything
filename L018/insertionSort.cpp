#include <iostream>
using namespace std;

void insertionSort(int n, int arr[])
{
    for (int i = 1; i < n; i++)
    {

        int temp = arr[i];
        int j = i - 1;

        while (j >= 0)
        {

            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // ruk jao
                break;
            }
            j--;
        }

        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[] = { 1, 20, 4, 2, 699  , 5};
    insertionSort(6, arr);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}