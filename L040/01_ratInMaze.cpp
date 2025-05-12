#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &mat)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && mat[x][y] == 1)
        return true;
    else
        return false;
}

void solve(vector<vector<int>> &mat, int n, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path)
{
    // cout << "Solving " << path << endl;

    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // down
    int newX = x + 1;
    int newY = y;
    if (isSafe(newX, newY, n, visited, mat))
    {
        cout << "Solving " << path << endl;
        path.push_back('D');
        solve(mat, n, ans, newX, newY, visited, path);
        path.pop_back();
    }

    // Up
    newX = x - 1;
    newY = y;
    if (isSafe(newX, newY, n, visited, mat))
    {
        path.push_back('U');
        solve(mat, n, ans, newX, newY, visited, path);
        path.pop_back();
    }

    // Right
    newX = x;
    newY = y + 1;
    if (isSafe(newX, newY, n, visited, mat))
    {
        path.push_back('R');
        solve(mat, n, ans, newX, newY, visited, path);
        path.pop_back();
    }

    // Left
    newX = x;
    newY = y - 1;
    if (isSafe(newX, newY, n, visited, mat))
    {
        path.push_back('L');
        solve(mat, n, ans, newX, newY, visited, path);
        path.pop_back();
    }

    visited[x][y] = 0;
}
vector<string> findPath(vector<vector<int>> &mat)
{
    // code here
    vector<string> ans;

    if (mat[0][0] == 0)
        return ans;

    int x = 0, y = 0, n = mat.size();
    string path = "";
    vector<vector<int>> visited = mat;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            visited[i][j] = 0;
    }

    solve(mat, n, ans, x, y, visited, path);
    sort(ans.begin(), ans.end());

    return ans;
}
int main()
{
    vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string> ans = findPath(mat);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
    return 0;
}