#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solve(vector<int>& sum, int q){
    int s = 0, e = sum.size() - 1, ans = -1, mid;

    while(s <= e){
        mid = s + (e - s) / 2;
        if(sum[mid] >= q){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }

    return ans + 1;
}
int main()
{
    int n, runningSum = 0;
    cin >> n;
    vector<int> runSum;
    while(n != 0){
        int a;
        cin >> a;
        runningSum += a;
        runSum.push_back(runningSum);
        n--;
    }

    int m;
    cin >> m;
    while(m != 0){
        int q;
        cin >> q;
        cout << solve(runSum, q) << "\n";
        m--;
    }

    return 0;
}