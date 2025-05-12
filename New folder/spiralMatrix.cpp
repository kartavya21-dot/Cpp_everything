#include <iostream>
#include <vector>
#include <list>
using namespace std;

vector<vector<int>> spiral(vector<int> mat, int m, int n)
{
    // vector<vector<int>> ans(m, vector<int> (n));
    vector<vector<int>> ans(3, vector<int> (5));
    int left = 0, right = n - 1, top = 0, down = m - 1, r = 0, c = 0, l = 0;

    for (int i = 0; i < 2 * (min(m, n)) - 1; i++)
    {

        if (i % 4 == 0)
        {
            for (c = left; c <= right; c++)
            {
                ans[r][c] = mat[l];
                cout << mat[l] << " : at i = " << i << endl;
                l++;
            }
            c = right;
            top++;
        }
        else if (i % 4 == 1)
        {
            for (r = top; r <= down; r++)
            {
                ans[r][c] = mat[l];
                cout << mat[l] << " : at i = " << i << endl;
                l++;
            }
            r = down;
            right--;
        }
        else if (i % 4 == 2)
        {
            for (c = right; c >= left; c--)
            {
                ans[r][c] = mat[l];
                cout << mat[l] << " : at i = " << i << endl;
                l++;
            }
            c = left;
            down--;
        }
        else if (i % 4 == 3)
        {
            for (r = down; r >= top; r--)
            {
                ans[r][c] = mat[l];
                cout << mat[l] << " : at i = " << i << endl;
                l++;
            }
            r = top;
            left++;
        }
    }
    return ans;
}

void print2d(vector<vector<int>> mat){
    for(int i = 0; i < mat.size(); i++){
        for (int j = 0; j < mat[0].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> mat = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int m = 3, n = 5;
    vector<vector<int>> ans = spiral(mat, m, n);

    print2d(ans);

    return 0;
}