#include <iostream>
#include <vector>
using namespace std;

void solve(string digits, string output, int index, vector<string>& ans, string mapping[], int n){

    if(index == n){
        ans.push_back(output);
        return;
    }

    int num = digits[index] - '0';
    string letter = mapping[num];

    for(int i = 0; i < letter.size(); i++){
        output.push_back(letter[i]);
        solve(digits, output, index + 1, ans, mapping, n);
        output.pop_back();  // backtrack to remove the current character
    }

}

vector<string> letterCombinations(string digits) {
        string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        int index = 0, n = digits.size();
        vector<string> ans;

        if(n == 0)
            return ans;

        string output;
        // int n = digits.size();
        solve(digits, output, index, ans, mapping, n);
        return ans;
}

int main()
{
    string digits = "23";
    vector<string> ans = letterCombinations(digits);
    for(auto i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}