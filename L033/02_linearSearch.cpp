#include <iostream>
using namespace std;

bool search(int arr[], int ele, int size){
    if(size==0) return false;

    if(arr[0] == ele)
        return true;
    else
        return search(arr + 1, ele, size - 1);
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int ele = 4, size = 7;
    bool ans = search(arr, ele, size);
    if(ans)
        cout << "Element Found";
    else
        cout << "Element not Found";

    return 0;
}