#include <iostream>
#include <vector>
using namespace std;

int direct(vector<int>& arr) {
    int ans = 0;
    for(int i : arr) ans |= i;
    return ans;
}

void print(vector<int>& arr) {
    for(int i : arr) cout << i << ", "; 
    cout << " : ";
}

int withSubarray(vector<int>& arr) {
    int ans = 0;
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        vector<int> ele;
        for(int j = i; j < n; j++) {
            ele.push_back(arr[j]);
            int tt = direct(ele);
            ans |= tt;
            cout << "for array: ";
            print(ele);
            cout << tt << " \n";
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 4, 6};
    cout << "Using direct Method: " << direct(arr) << "\n";
    cout << withSubarray(arr);
    return 0;
}