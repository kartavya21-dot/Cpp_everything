#include<iostream>
using namespace std;

int main(){
    // For finding pow(a,b)

    int a, b;
    cin >> a >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    
    cout << ans;
}

