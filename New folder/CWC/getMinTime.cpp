#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool is(vector<int> mp, int k) {
    int extraTime = 0, extraTask = 0;
    
    vector<int> chunk;

    for(int id = 0; id < mp.size(); id++) {
        int cnt = mp[id];

        if(cnt == k) {
            continue;
        } else if(cnt < k) {
            int diff = k - cnt;
            extraTime += diff - (diff & 1);
        } else {
            int diff = cnt - k;
            extraTask += diff;
        }
    }

    return extraTask * 2 <= extraTime;
}

int getMin(vector<int> cache, int n, int m) {
    vector<int> mp(n + 1, 0);
    for(int i : cache) {
        mp[i]++;
    }
    int s = 0, e = cache.size() * 2, mid, ans = e;
    while(s <= e) {
        mid = s + (e - s) / 2;
        if(is(mp, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    // int n = 3, m = 5;
    // vector<int> cache = {1, 1, 3, 1, 1};
    int n = 4, m = 4;
    vector<int> cache = {1, 2, 3, 4};
    cout << "Get min: " << getMin(cache, n, m);
    return 0;
}