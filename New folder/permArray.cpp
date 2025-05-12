#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    int nums[] = {2, 3, 1, 0, 4};
    cout << "here" << endl;
    for(int i = 0; i < 5; i++){
        // cout << i << endl;
        cout << nums[nums[i]] << endl;
        // a[i] = nums[nums[i]];
    }
    cout << "again" << endl;
    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    return 0;
}