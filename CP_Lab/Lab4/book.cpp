#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

unordered_set<int> seen;

void solve(int n, int& ans, int ind = 0) {
    
    if(ind == n){
        ans++;
        return;
    }

    for(int i = 0; i < n; i++) {
        if(ind == i) continue;
        if(seen.find(i) == seen.end()) {
            seen.insert(i);
            solve(n, ans, ind + 1);
            seen.erase(i);c
        }
    }
}

int main() {
    for(int i = 1; i <= 5; i++) {
        int ans = 0;
        solve(i, ans);
        cout << "For number of books: " << i << ", ways: " << ans << endl;
    }
    return 0;
}