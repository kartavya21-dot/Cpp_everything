#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define min(a, b) a < b ? a : b
using namespace std;

int ceil(int n, int m){
    return n / m + (n % m == 0 ? 0 : 1);
}

int solve(int n, int m, int a, int b){
    float originalRate = (float)a;
    float specialRate = (float)b / (float)m;

    if(originalRate <= specialRate){
        return originalRate * n;
    }
    int maxSheCanRide = ceil(n, m);
    float usingSpecialAndOg = (n / m) * b + (n % m) * a;
    float usingSpecial = maxSheCanRide * b;

    return min(usingSpecial, usingSpecialAndOg);
}

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    cout << solve(n, m, a, b) << "\n";
    return 0;
}