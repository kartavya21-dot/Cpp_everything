#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> set, int index, int n, vector<int> output, vector<vector<int>> &ans)
{
    if (index >= n)
    {
        ans.push_back(output);
        return;
    }
    // exclude
    solve(set, index + 1, n, output, ans);

    // indclude
    int ele = set[index];
    output.push_back(ele);
    solve(set, index + 1, n, output, ans);
}

vector<vector<int>> powerSet(vector<int> set)
{
    int n = set.size();
    int index = 0;
    vector<vector<int>> ans;
    vector<int> output;
    solve(set, index, n, output, ans);

    return ans;
}

int main()
{
    vector<int> set = {1, 2, 3};
    vector<vector<int>> power_set = powerSet(set);
    for (int i = 0; i < power_set.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < power_set[i].size(); j++)
        {
            cout << power_set[i][j] << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}