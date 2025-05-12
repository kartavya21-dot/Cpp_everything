//{ Driver Code Starts
// #include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<int> removeDuplicate(int A[], int N)
    {
        vector<int> ans;
        int f;
        for (int i = 0; i < N; i++)
        {
            cout << "In the first loop: "<<i<<"th"<<endl;
            f = 1;
            for (int j = i; j >= 0; j--)
            {
            cout << "In the second loop: "<<j<<"th"<<endl;
                if (A[i] == A[j])
                {
                    f = 0;
                }
                cout << f << endl;
            }
            if (f == 1)
            {
                ans.push_back(A[i]);
            cout << A[i] << endl;
            }
        }
        cout << "Out of function" << endl;
        return ans;
    }
};

//{ Driver Code Starts.

// Driver method to test above method
int main()
{

    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Solution ob;
    vector<int> v = ob.removeDuplicate(a, n);

    for (auto it : v)
        cout << it << " ";
    cout << endl;

    return 0;
}

// } Driver Code Ends