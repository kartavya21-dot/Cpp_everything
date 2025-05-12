#include <iostream>
#include <vector>
using namespace std;

void solve(string digits, string mapping[], vector<string> &ans, string &output, int index, int n){
    if(index == n){
        ans.push_back(output);
        return;
    }

    int ind = digits[index] - '0';
    string st = mapping[ind];
    for(int i = 0; st[i] != '\0'; i++){
        output.push_back(st[i]);
        solve(digits, mapping, ans, output, index + 1, n);
        output.pop_back();  // backtrack to remove the current character
    }

}

vector<string> letterCombinations(string digits){
    string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string output;
    vector<string> ans;
    int index = 0, n = digits.length();

    solve(digits, mapping, ans, output, index, n);

    return ans;
}

int main()
{
    string digits = "253";
    vector<string> ans = letterCombinations(digits);
    for(auto i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}