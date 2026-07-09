#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int>& a, vector<int>& b) {
    int n1 = a.size(), n2 = b.size();
    vector<int> ans;
    int i = 0, j = 0;
    while(i < n1 && j < n2) {
        // cout << a[i] << " " << b[j] << endl;
        
        if(a[i] < b[j]) {
            ans.push_back(a[i++]);
        } else {
            ans.push_back(b[j++]);
        }
    }
    while(i < n1) {
        ans.push_back(a[i++]);
    }
    while(j < n2) {
        ans.push_back(b[j++]);
    }
    return ans;
}

int main()
{
    vector<int> a = {1, 2, 4, 5, 7, 9};
    vector<int> b = {4, 5, 7, 9, 10, 32};
    vector<int> c = merge(a, b);

    cout << "Finally merged array: ";
    for(int i : c) {
        cout << i << " ";
    }cout << endl;

    return 0;
}