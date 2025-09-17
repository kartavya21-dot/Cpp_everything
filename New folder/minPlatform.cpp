#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        int n = 2400, prefix = 0, platform = 1;
        vector<int> timeline(n + 1, 0);
        
        for(int i = 0; i < arr.size(); i++){
            timeline[arr[i]]++;
            timeline[dep[i] + 1]--;
            cout << arr[i] << " " << dep[i] << " => " << timeline[arr[i]] << " " << timeline[dep[i] + 1] << endl;
        }
        
        cout << "Onto second loop: " << endl;
        for(int i = 0; i < n + 1; i++){
            prefix += timeline[i];
            // cout << timeline[i] << endl;
            // cout << i << ". " << prefix << " ";

            // if(i == 1608)   cout << "know---------------------------------------------------";

            // timeline[i] = prefix;
            platform = max(platform, prefix);
        }
        
        return platform;
        
    }
};


int main()
{
    Solution obj;
    vector<int> arr = {2112, 258, 1645, 1608, 2144};
    vector<int> dep = {2307, 1738, 1714, 1907, 2235};
    cout << obj.findPlatform(arr, dep);
    
    return 0;
}