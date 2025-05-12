#include <iostream>
using namespace std;
int main()
{

    const int size = 5;
    int number[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter a element: ";
        cin >> number[i];
    }

    cout << "the elements of array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << number[i] << " ";
    }
    return 0;
}