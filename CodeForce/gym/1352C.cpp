#include <iostream>
using namespace std;

/*
    n = 4, k = 12

    numInRange = 3
    checkPoint = 4

    0 1 2 3
    4 5 6 7
    12 9 10 11
    16 13 14 15


*/

int solve(int n, int k){
    int numInRange = n - 1;
    int checkPoint = k / numInRange;
    int f = ((k % n) ? (k % n) : (n - 1));
    return (checkPoint * n) + f;
}

int main()
{
    int t;
    cin >> t;

    while(t > 0){
        int n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
        t--;
    }

    return 0;
}