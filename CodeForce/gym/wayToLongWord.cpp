#include <iostream>
#include <string> 
#include <vector>
using namespace std;

string reverseString(string s){
    int i = 0, j = s.size() - 1;
    while(i < j){
        swap(s[i++], s[j--]);
    }
    return s;
}
string numToString(int num){
    string ans = "";
    while(num != 0){
        int dig = num % 10;
        ans += dig + '0';
        num /= 10;
    }

    // reverseString(ans);

    return reverseString(ans);

}

void solve(string s){
    int n = s.size();
    if(n <= 10){
        cout << s << endl;
        return;
    }else{
        char f = s[0], e = s[n - 1];
        int sz = n - 2;
        string ans = "";
        ans += f;
        ans += numToString(sz);
        ans += e; 
        cout << ans << endl;
    }

}
int main()
{
    int n;
    vector<string> st;
    cin >> n;

    while(n != 0){
        string s;
        cin >> s;

        st.push_back(s);

        n--;
    }
    for(int i = 0; i < st.size(); i++){
        solve(st[i]);
    }
    
    return 0;
}