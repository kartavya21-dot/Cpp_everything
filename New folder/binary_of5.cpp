#include <iostream>
#include <vector>
using namespace std;

void bin(int n){
    vector<bool> ans;
    cout << n << ": ";
    do {
        ans.push_back(n % 2);
        n /= 2;
    } while(n);

    for(int i = ans.size() - 1; i >= 0; i--){
        cout << ans[i] << "_";
    }cout << endl;
}

int main()
{
    int i = 0;
    while(true) {
        if(i == 35) { 
            break;
        }
        bin(i);
        i += 5;
    }
    return 0;
}