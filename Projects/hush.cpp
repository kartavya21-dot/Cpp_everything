#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> subarraySum(vector<int> arr, int n, long long s)
{
    sort(arr.begin(), arr.end());
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];
        for (int j = 1; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum == s)
            {
                ans.insert(ans.end(), i + 1);
                ans.insert(ans.end(), j + 1);
                return ans;
            }
            else if (sum > s)
            {
                break;
            }
        }
    }
    ans.insert(ans.end(), -1);
    return ans;
}

int main()
{
    vector<int> arr{1, 2, 3, 5, 7};
    int n = 5;
    int s = 9;
    sort(arr.begin(), arr.end());
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];
        for (int j = 1; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum == s)
            {
                ans.insert(ans.end(), i + 1);
                ans.insert(ans.end(), j + 1);
                for (int k = 0; k < ans.size(); k++)
                {
                    cout << ans[k] << " ";
                }
                return 0;
            }
            else if (sum > s)
            {
                break;
            }
        }
    }
    ans.insert(ans.end(), -1);
    // for (int k = 0; k < ans.size(); k++)
    // {
    //     cout << ans[k] << " ";
    // }

    return 0;
}
