#include <iostream>
#include <vector>
using namespace std;

class FenwickTree {
    private:
        vector<int> tree;
        int n;

    public:
        FenwickTree(int size) {
            n = size;
            tree.resize(n + 1, 0);
        }

        FenwickTree(vector<int>& arr) : FenwickTree(arr.size()) {
            for(int i = 1; i <= n; i++) {
                tree[i] += arr[i - 1];
                int parent = i + (i & -i);
                if(parent <= n) {
                    tree[parent] += tree[i];
                }
            }
        }

        void update(int idx, int delta) {
            while(idx <= n) {
                tree[idx] += delta;
                idx += (idx & -idx); // Cascades down the tree by subtracting LSB
            }
        }

        // Prefix Query: Returns sum from array[0] to array[idx-1] (1-based query)
        int query(int idx) const {
            int sum = 0;
            while(idx > 0) {
                sum += tree[idx];
                idx -= (idx & -idx); // Cascades down the tree by subtracting LSB
            }
            return sum;
        }

        int rangeQuery(int l, int r) const {
            if(l > r || l <= 0) return 0;
            return query(r) - query(l - 1);
        }

};


int main() {
    vector<int> data = {3, 2, -1, 6, 5, 4, -3, 3};
    
    // Build tree in O(N) time
    FenwickTree bit(data);

    // Query sum from index 2 to 6 (1-indexed mapping: 3rd element to 7th element)
    // data[2] to data[6] -> -1 + 6 + 5 + 4 + -3 = 11
    cout << "Sum of range [3, 7]: " << bit.rangeQuery(3, 7) << endl;

    // Modify data[3] (value 6) by adding 2 (new value 8)
    bit.update(4, 2); 

    // Sum Range: [data[0] - data[i - 1]]
    cout << "Query 2: " << bit.query(2) << endl;

    // Query the range again to see the updated sum (11 + 2 = 13)
    cout << "Updated sum of range [3, 7]: " << bit.rangeQuery(3, 7) << endl;

    return 0;
}