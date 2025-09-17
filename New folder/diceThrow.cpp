#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Solution {
  private:
    int solve(int m, int n, int x, vector<vector<int>>& dp){
        if(n == 0){
            dp[n][x] = (x == 0);
            return x == 0;
        }
        
        if(dp[n][x] != -1){
            return dp[n][x];
        }
        
        int ways = 0;
        for(int i = 1; i <= x && i <= m; i++){
        
            ways += solve(m, n - 1, x - i, dp);
            
        }
        
        dp[n][x] = ways;
        
        return ways;
        
    }
  public:
    int noOfWays(int m, int n, int x) {
        // code here
        vector<vector<int>> dp(n + 1, vector<int>(x + 1, -1));
        return solve(m, n, x, dp);
    }
};

// class SolutionUsingTabulation {

//   public:
//     int noOfWays(int m, int n, int x) {
//         // code here
//         vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
//         dp[0][0] = 1;

//         for(int i = 1; i <= n; i++){
//             for(int j = 1; j <= x; j++){

//                 for(int k = 0; k < m && k < )

//             }
//         }


//     }

// };

int main()
{
    Solution obj;
    int m = 6;

    cout << left << setw(3) << "";
    for(int i = 0; i <= 3; i++){
        cout << left << setw(3) << i;
    }cout << endl;

    for(int x = 0; x <= 4; x++){
        cout << left << setw(3) << x;
        for(int n = 0; n <= 3; n++){
            cout << left << setw(3) << obj.noOfWays(m, n, x);
        }
        cout << endl;
    }
    
    return 0;
}