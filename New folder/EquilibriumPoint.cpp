//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n)
    {

        if (n == 1)
            return 1;
        int ans = 0, leftSum = 0, rightSum = 0;
        for (int i = n - 1; i > 0; i--)
        {
            cout << i  << endl << rightSum << endl;
            rightSum += a[i];
        }
        cout << rightSum << " & " << leftSum << endl;
        while (n > 1)
        {
            if (leftSum == rightSum)
            {
                return ans + 1;
                cout << rightSum << " & " << leftSum << endl;
            }
            else if (leftSum < rightSum)
            {
                leftSum += a[ans];
                rightSum -= a[ans + 1];
                ans = ans + 1;
                cout << rightSum << " & " << leftSum << endl;
            }
            else
            {
                leftSum -= a[ans - 1];
                rightSum += a[ans];
                ans = ans - 1;
            }
            n--;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{

    long long a[5] = {1, 3, 5, 2, 2};

    Solution ob;
    // calling equilibriumPoint() function
    cout << ob.equilibriumPoint(a, 5) << endl;

    return 0;
}

// } Driver Code Ends