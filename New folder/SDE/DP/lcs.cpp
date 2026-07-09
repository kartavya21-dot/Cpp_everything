#include <iostream>
#include <vector>
#include <climits>
#include <iomanip>
using namespace std;

void print(vector<vector<int>> vec) {
    for(auto v : vec) {
        for(auto i : v) cout << setw(3) << i << " "; cout << endl;
    } cout << "\n----------------------------\n\n";
}

class Solution {
    int solve(vector<int>& arr, vector<vector<int>>& dp, int i = 0, int last = -1) {
        if(i == arr.size()) {
            return 0;
        }

        if(dp[i][last + 1] != -1) {
            return dp[i][last + 1];
        }

        int take = 0, notTake;

        notTake = solve(arr, dp, i + 1, last);

        if(last == -1 || arr[i] > arr[last]) {
            take = 1 + solve(arr, dp, i + 1, i);
        }
        
        return dp[i][last + 1] = max(take, notTake);
    }
    
    int solve(vector<int>& arr, int i = 0, int last = INT_MIN) {
        if(i == arr.size()) {
            return 0;
        }
        
        int take = INT_MIN, notTake;
        
        if(arr[i] > last) {
            take = 1 + solve(arr, i + 1, arr[i]);
        }
        
        notTake = solve(arr, i + 1, last);
        
        return max(take, notTake);
    }
  public:
    int lis(vector<int>& arr) {
        // code here
        vector<vector<int>> dp(arr.size(), vector<int>(arr.size() + 1, -1));
        int res = solve(arr, dp, 0, -1);
        print(dp);
        return res;
        // return solve(arr);
    }
};

int main() {
    vector<int> num = {5, 8, 3, 7, 9, 1};
    Solution s;
    cout << s.lis(num) << endl;
    return 0;
}