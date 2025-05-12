#include <iostream>
#include <vector>
using namespace std;

vector<int> luckyNumbers(vector<vector<int>> &matrix)
{
    vector<int> ans;

    int m = matrix.size(), n = matrix[0].size();

    for (int i = 0; i < m; i++)
    {
        int min = matrix[i][0];
        for (int j = 0; j < n; j++)
        {
            if (min > matrix[i][j])
                min = matrix[i][j];
        }
        ans.push_back(min);
        cout << min << "  ";
    }
cout << endl;
    bool f = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[j][i] << "  ";
            if (matrix[j][i] > ans[i]){
                f = 1;
            cout << " greater element than " << ans[i] << " is " << matrix[j][i] << "   ";
                // break;
            }
        }
        cout << endl;

        if (f == 1)
        {
            cout << ans[i] << " ";
            ans.erase(ans.begin() + i);
        }
    }
    cout <<  endl << endl << ans[0] << endl;
    cout << ans[1] << endl;
    cout << ans[2] << endl;

    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{3,7,8},{9,11,13},{15,16,17}};
    vector<int> ans(luckyNumbers(matrix));

    for (int i = 0; i < 3; i++)
    {
        cout << ans[i] << endl;
    }
    

    return 0;
}