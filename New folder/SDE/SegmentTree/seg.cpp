#include <iostream>
#include <vector>
using namespace std;

int a[10000], seg[4*10000];

// void build(int ind, int low, int high) {
//     if(low == high) {
//         seg[ind] = a[low];
//     }
//     int mid = (low + high) / 2;
//     build(2 * ind + 1, low, mid);
//     build(2 * ind + 2, mid + 1, high);
//     seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
// }

// int query(int ind, int low, int high, int l, int r) {
//     // query in range
//     if(l >= low && r <= high)   return seg[ind];
//     // query out of range
//     if(high < l || low > r)     return 0;

//     // partial
//     int mid = (low + high) / 2;
//     int left = query(2 * ind + 1, low, mid, l, r);
//     int right = query(2 * ind + 2, mid + 1, high, l, r);
//     return left + right;
// }

void build(int ind, int low, int high) {
    if(low == high) {
        seg[ind] = a[low];
        return;
    }

    int mid = (low + high) / 2;
    build(2 * ind + 1, low, mid);
    build(2 * ind + 2, mid + 1, high);
    seg[ind] = max(seg[2 * ind + 1], seg[2 * ind + 2]);
}

int query(int ind, int low, int high, int l, int r) {
    // range in query
    if(low >= l && high <= r) {
        return seg[ind];
    }
    // query out of range
    if(high < l || low > r) {
        return INT_MIN;
    }
    // partial in and partial out || query in range
    int mid = (low + high) / 2;
    int left = query(2 * ind + 1, low, mid, l, r);
    int right = query(2 * ind + 2, mid + 1, high, l, r);
    return max(left, right);
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    build(0, 0, n - 1);
    int q;
    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;
        cout << query(0, 0, n - 1, l - 1, r - 1) << endl;
    }
    return 0;
}