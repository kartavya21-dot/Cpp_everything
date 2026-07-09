#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int>& dice) {
    
}

int main() {
    int n;
    cin >> n;
    while(n > 0) {
        int t;
        cin >> t;
        vector<int> dice;
        for(int i = 0; i < t; i++) {
            int a;
            cin >> a;
            dice.push_back(a);
        }
        cout << solve(dice) << "\n";
        n--;
    }

    return 0;
}