//{ Driver Code Starts
// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

int minJumps(vector<int> arr)
{
    // Your code here
    if (arr[0] == 0)
        return -1;

    int n = arr.size();
    int jump = 0;
    int sum = 0;

    for (int i = 0; i < n; i)
    {
        if (arr[i] == 0)
            return -1;

        int max = arr[i], index = i;
        for (int j = i + 1; j < i + arr[i] + 1; j++)
        {
            if (arr[j] > max && arr[i + j + arr[i]] != 0)
            {
                max = arr[j];
                index = j;
            }
        }
        cout << arr[i] << "  , max : " << max << "   |   ";
        i = index;
        jump++;
        sum += max;
        if(sum >= n - 1)
            break;
    }
    cout << endl;
    return jump + 1;
}

//{ Driver Code Starts.

int main()
{
    // vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    vector<int> arr = {5, 6, 8, 7, 2, 3};
    int ans = minJumps(arr);
    cout << ans;
    return 0;
}

// } Driver Code Ends