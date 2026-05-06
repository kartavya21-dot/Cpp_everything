#include <iostream>
#include <vector>
using namespace std;

int check_property(vector<vector<int>> &colony, int xCord, int yCord)
{
    int n = colony.size(), m = colony[0].size();
    int dir[8][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {-1, -1}, {1, 1}, {1, -1}, {-1, 1}};
    int ans = 0;

    for (int i = 0; i < 8; i++)
    {
        int x = dir[i][0] + xCord, y = dir[i][1] + yCord;

        if (x < n && y < m && x > -1 && y > -1)
        {
            ans += colony[x][y];
        }
    }

    return ans;
}

vector<int> brides_property(vector<vector<int>> &colony)
{
    int n = colony.size(), m = colony[0].size();
    int ansProperty = 0, ansDist = n + m, ansBride = 0, ansX = 0, ansY = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 && j == 0)
                continue;
            if (colony[i][j] == 1)
            {
                ansBride++;
                int property = check_property(colony, i, j);
                cout << "Brides Cord: (" << i << ", " << j << ") => properties: " << property << " , and its distance : " << i + j << endl;
                if (property > ansProperty)
                {
                    ansProperty = property;
                    ansX = i;
                    ansY = j;
                }
                else if (property == ansProperty)
                {
                    if (ansDist > i + j)
                    {
                        ansX = i;
                        ansY = j;
                        ansDist = i + j;
                    }
                }
            }
        }
    }
    return {ansX, ansY, ansProperty, ansDist, ansBride};
}

int main()
{
    vector<vector<int>> colony = {{1, 0, 1, 1, 1, 0},
                                  {1, 0, 0, 0, 1, 1},
                                  {0, 0, 0, 1, 1, 1}};

    // no of brides
    // brides and their property
    // suitable bride
    cout << "Brides with their property: \n";
    vector<int> ans = brides_property(colony);
    cout << endl
         << endl
         << "No of Brides in vicinity: " << ans[4] << endl
         << endl;
    cout << "Bride which is suitable: \n Coordinates : (" << ans[0] << ", " << ans[1] << ")" << ", and property: " << ans[2] << ", and her dist: " << ans[3] << endl;
    return 0;
}