#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> coins = {1, 2, 5};
    sort(coins.begin(), coins.end());

    int n = 13;
    int ans = 0, ind = coins.size() - 1;
    while(n && ind >= 0) {
        int numOfCoin = n / coins[ind];
        n = n % coins[ind];
        ans += numOfCoin;
        // cout << numOfCoin << " of " << coins[ind] << "\n";
        ind--;
    }
    
    if(ind < 0) {
        if(n == 0) cout << "Coins: " << ans;
        else cout << "Not Possible: ";
    } else {
        cout << "Coins: " << ans << "\n";
    }

    return 0;
}