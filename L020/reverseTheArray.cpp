#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr , int m)
{
    int s = m + 1, e = arr.size() - 1;

    while (s < e) {
      swap(arr[s], arr[e]);
      s++;
      e--;
    }
}

void printVector(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    reverseArray(arr, 2);

    printVector(arr);
    
    return 0;
}