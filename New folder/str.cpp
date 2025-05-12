#include <iostream>
#include <string>
using namespace std;

string gameOfThrones(string s) {
    int ans = 0, n = s.size();
    int i, j;
    if(n == 1){
        return "YES";
    }
    
    for(i = 0; i <= n/2; i++){
        for(j = i + 1; j < n; j++){
            if(s[i] != s[j]){
                ans++;
            }
        }
    }

    if(n % 2 == 0 && ans == (3/4) * n * ((n/2)-1) ){
        return "NO";
    }
    else if( n % 2 != 0 && ans - (n/2) == (1/8) * ( (3 * (n*n)) - (4*n) + 1 )){
        return "NO";
    }
    
    return "YES";
}

int main()
{
    cin >> ""

    return 0;
}