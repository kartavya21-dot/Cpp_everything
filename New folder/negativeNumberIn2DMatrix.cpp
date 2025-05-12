#include <iostream>
#include <vector>
using namespace std;

int countNegatives(vector<vector<int>> grid)
{
    int n = grid.size(), y = grid[0].size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (grid[i][0] < 0) 
        {
            count += y;
            continue;
        }
        
        int s = 0, e = y - 1, m = (e + s) / 2, ans = 0;
        while (s <= e)
        {
            if (grid[i][m] >= 0)
            {
                ans = m;
                s = m + 1;
            }
            else
            {
                e = m - 1;
            }
            m = (e + s) / 2;
        }
        count += y - ans  - 1; 
        cout << " count after " << i << "th iteration: "<< count << " and ans: " << ans << endl;
    }

    return count;
}

int main()
{
    vector<vector<int>> grid = {{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-2,-3,-4}};
    // vector<vector<int>> grid = {{4,3},{1, 2}};
    cout << countNegatives(grid);

    return 0;
}