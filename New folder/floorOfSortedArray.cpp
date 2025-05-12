#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
//Works;)
long long findMinDiff(vector<long long> a, long long n, long long m)
{
    sort(a.begin(), a.end());

    long long min = a[m - 1] - a[0];
    
    for (int i = 0; i <=  n  - m; i++)
    {
        cout << i << " ";

        if (a[i + m - 1] - a[i] < min)
            min = a[i + m - 1] - a[i];
    }
    cout << endl;
    return min;
}
int main()
{
    vector<long long> a = {3, 4, 1, 9, 9, 3};
    // 1    3   3   4   9   9
    // 0    1   2   3   4   5
    long long n = 6, m = 5;
    long long min = findMinDiff(a, n, m);
    cout << min;
        return 0;
}