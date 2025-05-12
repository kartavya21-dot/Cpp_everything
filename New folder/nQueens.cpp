#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
  private:
    void print(vector<int> perm){
        for(int i = 0; i < perm.size(); i++){
            cout << perm[i] << " ";
        }cout << endl;
    }
    bool forThatCase(vector<int> perm, int num, int i){
 
        if(i - 2 >= 0 && ((num - perm[i - 2] == 2) || (num - perm[i - 2] == -2) ) ){
            cout << i << ". " << num << " " << perm[i - 2] << endl;
            print(perm);
            return false;
        }
        
        return true;
    }
  
    void solve(int n, vector<vector<int>>& ans, vector<int> perm, vector<bool> isFalse, int ind){
        
        if(ind == n){
            ans.push_back(perm);
            return;
        }
        
        for(int i = 0; i < n - 2; i++){
            int prevEle = perm[ind - 1];
            int currEle = prevEle + (2 + i);
            
            if(currEle > n) break;
            if(ind > 1 && isFalse[currEle - 1] == false ){ 
                if(forThatCase(perm, currEle, ind) == false)
                    continue;
            }
            
            
            if(isFalse[currEle - 1] == false){
                
                
                perm.push_back(currEle);
                isFalse[currEle - 1] = true; 
                solve(n, ans, perm, isFalse, ind + 1);
                
                perm.pop_back();
                isFalse[currEle - 1] = false; 
            }
        }
        
        for(int i = 0; i < n - 2; i++){
            int prevEle = perm[ind - 1];
            int currEle = prevEle - (2 + i);
            
            if(currEle < 1) break;
            
            if(isFalse[currEle - 1] == false){
                perm.push_back(currEle);
                isFalse[currEle - 1] = true; 
                solve(n, ans, perm, isFalse, ind + 1);
                
                perm.pop_back();
                isFalse[currEle - 1] = false; 
            }
        }
        
    }
  public:
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> ans;
        vector<int> perm;
        vector<bool> isFalse(n, false);
        int ind = 1;
        
        for(int i = 1; i <= n; i++){
            
            isFalse[i - 1] = true;
            perm.push_back(i);
            
            solve(n, ans, perm, isFalse, ind);
            
            perm.pop_back();
            isFalse[i - 1] = false;
        }
        
        return ans;
    }
};

int main() {
    int n = 5;
    // cin >> n;
    Solution ob;
    vector<vector<int>> ans = ob.nQueen(n);
    if (ans.size() == 0)
        cout << -1 << "\n";
    else {
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++) {
            cout << "[";
            for (int u : ans[i])
                cout << u << " ";
            cout << "] ";
        }
        cout << endl;
    }
    cout << "~"
         << "\n";

    return 0;
}