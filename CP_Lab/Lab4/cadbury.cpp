#include <iostream>
#include <vector>
using namespace std;

int solve(int l, int w) {
    if(l == 0 || w == 0) return 0;
    int maxi = max(l, w);
    int mini = min(l, w);
    if(mini == 1) {
        return w;
    }
    return 1 + solve(maxi - mini, mini);
}

int main() {
    int l = 5, w = 12;
    cout << "Number of student who get chocolate is: " << solve(l, w) << endl;
    return 0;
}