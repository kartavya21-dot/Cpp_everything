#include <iostream>
#include<vector>

using namespace std;

int missingNumber(vector<int>& array, int n) {
        int ans, sum = 0, nest = n;
        for(int i=0; i<n; i++){
            sum = sum + array[i];
            nest = nest + i;
        }
        
        ans = nest - sum;
        return ans;
    }

int main()
{
    int n = 7;
    vector<int> arr={2,3,4,1,6,7};
    // int ans=missingNumber(arr, n);
    // cout<<ans;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    int sum = 0, nest = 0;
    for (int i = 0; i < 6; i++)
    {
        sum = sum + arr[i];
    }

    for (int i = 1; i < 8; i++)
    {
        nest = nest + i;
    }
    int ans = nest -sum;
    cout<<ans;
    
    
    return 0;
}