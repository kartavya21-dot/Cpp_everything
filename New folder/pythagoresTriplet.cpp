#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
  private:
    int pythPair(int num){
        if(num < 3) return -1;
        if(num & 1){
            float n = num;
            float first = ((n * n) / 2) - 0.5;
            float second = ((n * n) / 2) + 0.5;
            
            float test1 = first - (int)first;
            float test2 = second - (int)second;
            
            // cout << num << " => " << test1 << " " << test2;
            if(test1 != 0 || test2 != 0){
                return -1;
            }
            return first * 1001 + second;
        }else{
            float n = num;
            float first = ((n * n) / 4) - 1;
            float second = ((n * n) / 4) + 1;
            
            float test1 = first - (int)first;
            float test2 = second - (int)second;
            
            // cout << num << " => " << test1 << " " << test2;
            
            if(test1 != 0 || test2 != 0){
                return -1;
            }
            return first * 1001 + second;
        }
    }
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        if(arr.size() < 3)
            return false;
        unordered_map<int, int> mp;
        sort(arr.begin(), arr.end(), greater<int>());
        
        for(int i = 0; i < arr.size(); i++){
            
            if(mp.find(arr[i]) == mp.end()){
                mp[arr[i]]++;
            }
            
            int pairOfnum = pythPair(arr[i]);
                
            int first = pairOfnum % 1001;
            int second = pairOfnum / 1001;
            cout << arr[i] << " => (" << first << ", " << second << ")\n"; 
            if(pairOfnum == -1)
                continue;
            
            
            if(mp.find(first) != mp.end() && mp.find(second) != mp.end()){
                return true;
            }
            
        }
        
        return false;
        
    }
};
int main()
{
    Solution obj;
    vector<int> arr = {13, 9, 16, 3, 15, 8, 1, 28, 3, 12, 29, 3, 28, 19, 11, 25, 11, 26, 19, 3};

    obj.pythagoreanTriplet(arr);
    
    return 0;
}