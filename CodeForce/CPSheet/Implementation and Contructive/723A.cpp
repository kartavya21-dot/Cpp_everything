#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n = 3;
    vector<int> arr;
    while(n){
        int a;
        cin >> a;
        arr.push_back(a);
        n--;
    }
    sort(arr.begin(), arr.end());
    cout << arr[2] - arr[0] << endl;
    return 0;
}