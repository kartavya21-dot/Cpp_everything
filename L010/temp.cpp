#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printArray(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main(/*vector<int> &arr*/)
{
    vector<int> ans;
    int arr[]={1,2,2,3,3,3};
    sort(ans.begin(), ans.end());
    int count;
    int r =1;
    for (int i = 0; i < 5; )
    {
        count = 1;
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        ans.push_back(count);
        i = i + count;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = i + 1; j < ans.size(); j++)
        {
            if (ans[i] == ans[j])
            {
                r = 0;
                
                break;
            }
            else
            {
                r = 1;
            }
        }
    }
    printArray(ans, ans.size());
    cout<<r;
    return 0;
}