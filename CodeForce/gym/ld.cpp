#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        int rem = n % 3;
        cout << ((rem == 0) ? 0 : (3 - rem)) << '\n';
        t--;
    }
}