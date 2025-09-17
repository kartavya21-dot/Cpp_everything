#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Solution {
    int solve(string& s1, string& s2, int n, int m, vector<vector<int>>& dp){

        if(n == 0 || m == 0){
            dp[n][m] = 0;
            return 0;
        }

        if(dp[n][m] != -1){
            return dp[n][m];
        }

        if(s1[n - 1] == s2[m - 1]){
            dp[n][m] = solve(s1, s2, n - 1, m - 1, dp) + 1;
            return dp[n][m];
        }

        dp[n][m] = max( solve(s1, s2, n - 1, m, dp), solve(s1, s2, n, m - 1, dp) );

        return dp[n][m];

    }
    
  public:
    int longestCommonSubstr(string& s1, string& s2) {
        // your code here
        int n = s1.size() + 1, m = s2.size() + 1;
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        int ans = solve(s1, s2, n, m, dp);

        cout << right << setw(5) << "";
        for(int i = 0; i < m + 1; i++)  cout << right << setw(5) << i;
        cout << endl;
        for (int i = 0; i < n + 1; i++)
        {
            cout << right << setw(5) << i;
            for (int j = 0; j < m + 1; j++)
            {
                cout << right << setw(5) << dp[i][j];
            }
            cout << endl;
        }


        return ans;
    }
};

int main()
{
    string s1 = "ABCDGH", s2 = "ACDGHR";
    Solution obj;

    cout << obj.longestCommonSubstr(s1, s2);

    return 0;
}