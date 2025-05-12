#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int ele){
    if(s > e)
        return false;
    int mid = s + ( e - s ) / 2;
    if(arr[mid] == ele)
        return true;

    if(arr[mid] > ele)
        return binarySearch(arr, s, mid - 1, ele);
    else    
        return binarySearch(arr, mid + 1, e, ele);

}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int s = 0, e = 6, ele = 3;

    if(binarySearch(arr, s, e, ele))
        cout << "Element Found" << endl;
    else
        cout << "Element Not Found" << endl;
    return 0;
}