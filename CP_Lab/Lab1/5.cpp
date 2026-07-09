#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 4, 5, 7, 9};
    vector<int> b = {4, 5, 7, 9, 10, 32};
    vector<int> c(a.size() + b.size(), 0);

    for(int i = 0; i < a.size(); i++) {
        c[i * 2] = a[i];
        c[i + (i & 1)] = b[i];
    }
    for(int i : c)  cout << i << " "; cout << endl;
    return 0;
}