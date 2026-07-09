#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solve(vector<int>& v, int& n) {
    int h = n / 2;
    for(int i = 0; i < n; i++) {
        int ind = i + 1, num = v[i];

        if(ind != num) {
            if(ind & 1) {
                if(ind > h) {
                    return false;
                }
                // right half
                int a = ind;
                bool f = false;
                while(a < num) {
                    a *= 2;
                    if(a == num) {
                        f = true;
                        break;
                    }
                }
                if(!f)  return false;
            } else {
                int a = ind;
                bool f = false;
                // right half
                while(a < num) {
                    a *= 2;
                    if(a == num) {
                        f = true;
                        break;
                    }
                }
                a = ind;
                // left half
                while(a > num) {
                    if((a & 1) && a != num) {
                        return false;
                    }
                    a /= 2;
                    if(a == num) {
                        f = true;
                        break;
                    }
                }
                if(!f)  return false;
            }
        }

    }  
    return true;  
}

int main() {
    int t;
    cin >> t;
    while(t > 0) {
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            v.push_back(a);
        }

        if(solve(v, n)) cout << "YES\n";
        else cout << "NO\n";

        t--;
    }

    return 0;
}