#include <iostream>
using namespace std;

int main()
{
    int i, j, size = 7, arr[7] = {0, 1, 2, 4, 6, 5, 3}, temp;
    for(i = 0; i < size - 1 ; i++){
        for(j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for ( i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}