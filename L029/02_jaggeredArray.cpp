#include <iostream>

using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    int **arr = new int*[rows];

    for (int i = 0; i < rows; ++i) {
        int cols;
        cout << "Enter the number of columns for row " << i + 1 << ": ";
        cin >> cols;

        arr[i] = new int[cols];

        for (int j = 0; j < cols; ++j) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Print the jagged array
    cout << "Jagged array elements:\n";
    for (int i = 0; i < rows; ++i) {
        int m = sizeof(arr[i]) / sizeof(int);
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}