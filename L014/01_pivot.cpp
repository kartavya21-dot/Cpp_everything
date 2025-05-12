#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{

    int s = 0, e = n - 1;
    int m = s + (e - s) / 2;

    while (s < e)
    {

        if (arr[m] >= arr[0])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }

        m = s + (e - s) / 2;
    }
    return s; // or return e; both works.
}

int main()
{
    int arr[] = {8, 10, 17, 1, 3};

    cout<<"Pivot is at Index: "<<getPivot(arr, 5)<<endl;
    return 0;
}