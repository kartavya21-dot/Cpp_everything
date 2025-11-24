#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n;){
            
            if(i == n - 1)  return true;
            if(nums[i] == 0) return false;

            int maxIndex = 0, maxVal = INT_MIN;
            int maxJump = i + nums[i];
            for(int j = i; j < n && j <= maxJump; j++){
                if(maxVal < nums[j]){
                    maxVal = nums[j];
                    maxIndex = j;
                }
            }
            cout << nums[i] << " " << maxVal << " " << maxIndex << endl;
            i = maxIndex;
        }

        return true;
    }
};

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int i = 0;

        while (i < n) {
            if (i + nums[i] >= n - 1) return true; // can reach end from here
            if (nums[i] == 0) return false; // stuck

            int maxReach = 0;
            int maxIndex = i;
            int maxJump = i + nums[i];

            for (int j = i + 1; j <= maxJump && j < n; j++) {
                if (j + nums[j] > maxReach) {
                    maxReach = j + nums[j];
                    maxIndex = j;
                }
            }

            if (maxIndex == i) return false; // no progress possible

            i = maxIndex;
        }

        return true;
    }
};


int main()
{
    // vector<int> nums = {2,3,1,1,4};
    vector<int> nums = {3,2,1,0,4};
    Solution obj;
    cout << obj.canJump(nums);

    return 0;
}