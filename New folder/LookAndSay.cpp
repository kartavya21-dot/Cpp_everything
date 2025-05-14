#include <iostream>
using namespace std;

class Solution {
    string solve(string s, int n){
        if(n == 1){
            return s;
        }
        cout << "Func call for " << n <<endl;
        string ans = "";
        
        int i = 0;

        while(s[i] != '\0'){
            char c = s[i];
            int count = 0;

            cout << "In loop : " << c << endl;

            while(s[i] == c){
                count++;
                cout << "In nested loop : " << s[i] <<endl;
                i++;
            }
            
            ans += (count + '0');
            ans += c;
        }
        return solve(ans, n - 1);
        
    }
  public:
    string countAndSay(int n) {
        // code here
        string s = "1";
        return solve(s, n);
        
    }
};

int main()
{
    Solution obj1;

    string s = obj1.countAndSay(10);
    cout << s;
    
    return 0;
}