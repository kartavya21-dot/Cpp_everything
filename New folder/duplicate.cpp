#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> duplicates(long long arr[], int n)
    {
        vector<int> ans;
        int i = 0, f = 1;
        while (i < n)
        {
            f = 1;
            cout << i << "th iteration, 1st" << endl;
            for (int j = 0; j < n; j++)
            {
                cout << j << "th iteration, 2nd" << endl;
                if (arr[j] == i)
                {
                    f++;
                    cout << "incrementing " << f << endl;
                }
            }
            if (f > 2)
            {
                cout << "pushing " << i << "th element" << endl;
                ans.push_back(i);
            }
            cout << endl;
            i++;
        }
         if(ans.size() > 1){
            ans.erase(ans.begin());
            return ans;
        }
        else{
            int a = ans[0];
            cout << a << endl;
            return ans;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    long long a[] = {0, 3, 1, 2};
    int n = 4;

    Solution obj;
    vector<int> ans = obj.duplicates(a, n);
    for (int i : ans)
        cout << i << ' ';
    cout << endl;
    return 0;
}

// } Driver Code Ends