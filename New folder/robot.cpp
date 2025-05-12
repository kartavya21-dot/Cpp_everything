#include <iostream>
#include <map>
#include <vector>
using namespace std;

int ans(vector<int> current, vector<vector<int>> obstacles)
{
    // dir   j = 1  i = 2   -j = 3  -i = 4
    int n = obstacles.size(), m = current.size();
    map<pair<int, int>, int> mp;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> p = {obstacles[i][0], obstacles[i][1]};
        mp[p]++;
    }
    int dir = 1, i = 0, x = 0, y = 0;

    while (i < m)
    {

        if (current[i] == -1)
        {
            if(dir == 4)
                dir = 1;
            else
                dir++;
            
            // dir = dir == 4 ? 1 : dir++;
        }
        else if (current[i] == -2)
        {
            if(dir == 1)
                dir = 4;
            else
                dir--;
            // dir = dir == 1 ? 4 : dir--;
        }
        else
        {
            if (dir == 1)
            {
                while (current[i] != 0)
                {
                    if (mp[{x, y}] == 0)
                    {
                        y++;
                    }
                    else
                    {
                        y--;
                        break;
                    }
                    current[i]--;
                }
            }
            else if (dir == 2)
            {
                while (current[i] != 0)
                {
                    if (mp[{x, y}] == 0)
                    {
                        x++;
                    }
                    else
                    {
                        x--;
                        break;
                    }
                    current[i]--;
                }
            }
            else if (dir == 3)
            {
                while (current[i] != 0)
                {
                    if (mp[{x, y}] == 0)
                    {
                        y--;
                    }
                    else
                    {
                        y++;
                        break;
                    }
                    current[i]--;
                }
            }
            else
            {
                while (current[i] != 0)
                {
                    if (mp[{x, y}] == 0)
                    {
                        x--;
                    }
                    else
                    {
                        x++;
                        break;
                    }
                    current[i]--;
                }
            }
        }
        cout << "x : " << x << " , y : " << y << " , after current = " << current[i] << "   and dir: " << dir<< endl;
        i++;
    }
    int ans = x * x + y * y;
    return ans;
}

int main()
{
    vector<int> current = {3, -1, 4, -2, 5};
    vector<vector<int>> obstacles = {{3, 4}};
    cout << ans(current, obstacles);

    return 0;
}