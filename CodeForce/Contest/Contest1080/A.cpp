#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t > 0) {
        int n;
        cin >> n;
        bool s = false;
        for(int i = 0; i < n; i++) {
            int a; 
            cin >> a;
            if(a == 67) {
                s = true;
            }
        }
        if(s) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        t--;
    }

    return 0;
}