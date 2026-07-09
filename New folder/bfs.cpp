#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>
using namespace std;
// 1 2 4 8
// 0 5 6 9
// 0 4
// 7 8
// 0 2
// 1 8
// 1 7 9
// 3 6
// 0 3 5
// 1 6

class Solution
{
public:
    vector<int> bfs(vector<vector<int>> &adj)
    {
        // code here
        vector<int> ans;
        unordered_set<int> seen;
        queue<int> q;
        q.push(0);
        // ans.push_back(0);

        while (!q.empty())
        {
            int topIndex = q.front();
            cout << "Top Index: " << q.front();
            q.pop();
            ans.push_back(topIndex);
            seen.insert(topIndex);
            vector<int> topVector = adj[topIndex];
            cout << ", Vector: ";
            for (int i = 0; i < topVector.size(); i++)
            {
                cout << topVector[i];
                if (seen.find(topVector[i]) == seen.end())
                {
                    cout << ":true";
                    q.push(topVector[i]);
                }
                cout << " ";
            }
            cout << endl;
        }

        return ans;
    }
};

int main()
{
    // vector<vector<int>> v = {{2, 3, 1}, {0}, {0, 4}, {0}, {2}};
    vector<vector<int>> v2 = {
        {1, 2, 4, 8},
        {0, 5, 6, 9},
        {
            0,
            4,
        },
        {
            7,
            8,
        },
        {
            0,
            2,
        },
        {
            1,
            8,
        },
        {1, 7, 9},
        {
            3,
            6,
        },
        {0, 3, 5},
        {1, 6}
    }; Solution obj;
    obj.bfs(v2);
    return 0;
}