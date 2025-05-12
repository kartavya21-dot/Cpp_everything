#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<vector<int>> arr, int n)
{

    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < n; l++)
        {
            cout << arr[k][l] << "  ";
        }
        cout << endl;
    }
    cout << "----------------------------------------------------------" << endl
         << endl;
}

void transpose(vector<vector<int>> &matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << i << "th iteration : " << endl;
        for (int j = i + 1; j >= i && j < n; j++)
        {
            matrix[i][j] = matrix[i][j] ^ matrix[j][i];
            matrix[j][i] = matrix[i][j] ^ matrix[j][i];
            matrix[i][j] = matrix[i][j] ^ matrix[j][i];
            // swap(matrix[i][j], matrix[j][i]);
            printArray(matrix, n);
        }
        // printArray(matrix, n);
    }
}

int main()
{
    int n = 4;
    vector<vector<int>> mat = {{1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}, {4, 4, 4, 4}};
    transpose(mat, n);
    return 0;
}