#include <iostream>
using namespace std;

// 1 2 3 4 4 3 2 1
// 1 2 3 * * 3 2 1
// 1 2 * * * * 2 1
// 1 * * * * * * 1

int main()
{
    int n = 5;
    for(int i = 0; i < n; i++){
        // for numbers
        for(int j = 1; j <= n - i; j++){
            cout << j << " ";
        }
        
        // for stars
        for(int j = 1; j <= 2 * i; j++){
            cout << "* ";
        }
        
        // for numbers
        for(int j = 1; j <= n - i; j++){
            cout << n - j + 1 << " ";
        }
        cout << endl;

    }


    return 0;
}