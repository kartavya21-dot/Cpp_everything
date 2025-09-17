#include <iostream>
#include <vector>
using namespace std;

int ceil(int a, int b){
    return (a % b == 0) ? (a / b) : (a / b) + 1;
}

int solve(int a, int b, int k){

    if(a == 0 && b == 0){
        return 0;
    }
    if(k >= a && k >= b){
        return 1;
    }
    if(k >= a){
        b -= a;
        int ans = 1 + ceil(b, k);
        return ans;
    }
    if(k >= b){
        a -= b;
        int ans = 1 + ceil(a, k);
        return ans;
    }

    if(a < b){
        int ans = ceil(a, k);
        ans += ceil((b - a), k);
        return ans;
    }
    int ans = ceil(a, k);
    ans += ceil((b - a), k);
    
    return ans;

}

int main()
{
    vector<int> ans;
    int n, a, b, c;
    cin >> n;

    while(n != 0){
        cin >> a >> b >> c;
        ans.push_back(solve(a, b, c));
        n--;
    }

    for(int i : ans)
        cout << i << endl;

    
    return 0;
}