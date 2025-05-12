#include <iostream>
using namespace std;

void sort(int a[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        swap(a[min], a[i]);
    }
}

int main()
{
    int a[] = {6, 2, 8, 4, 10};

    sort(a, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}