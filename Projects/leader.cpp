#include <iostream>
#include <vector>

using namespace std;

void printV(vector<int> arr, int n)
{
    for (int k = 0; k < arr.size(); k++)
    {
        cout << arr[k] << " ";
    }
}

vector<int> leaders(int a[], int n)
{
    vector<int> ans{a[n - 1]};

    for (int i = 0; i < n - 1; i++)
    {
        bool k = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                k = 0;
                break;
            }
        }
        if (k == 1)
        {
            ans.insert(ans.begin(), a[i]);
        }
    }
    return ans;
}

int main()
{
    int a[] = {16, 17, 4, 3, 5, 2};
    int n = 6;

    vector<int> ans;

    for (int i = 0; i < n - 1; i++)
    {
        bool k = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                k = 0;
                break;
            }
        }
        if (k == 1)
        {
            ans.insert(ans.end(), a[i]);
        }
        cout<<i<< endl;
        printV(ans, ans.size());
        cout<<endl;
    }
    ans.insert(ans.end(), a[n-1]);
        printV(ans, ans.size());
    return 0;
}