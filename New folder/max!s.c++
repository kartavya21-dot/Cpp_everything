#include <iostream>
#include <vector>
using namespace std;

vector<int> findMaxRow(vector<vector<int>> mat, int N)
{
    // code here
    int m = 0, n = N - 1;
    int row = -1, max = N;

    while ((m < N) && (n > -1))
    {
        if (mat[m][n] == 1)
        {
            cout << "In first condition for mat[" << m << "][" << n << "] = " << mat[m][n]<< endl;
            if (m > row)
            {
                row = m;
                max = n;
            }
            n--;
        }
        else
        {
            cout << "In second condition for mat[" << m << "][" << n << "] = " << mat[m][n]<< endl;
            m++;
        }
        // if(m == N || n == -1)
        //     break;
    }

    vector<int> ans;
    ans.push_back(row);
    ans.push_back(N - max);

    return ans;
}
int main()
{
    vector<vector<int>> mat = {{0, 0, 1}, {0, 1, 1}, {0, 0, 0}};
    int N = 3;
    vector<int> ans = findMaxRow(mat, N);
    for(auto i: ans){
        cout << i << " ";
    }
    return 0;
}