#include <iostream>
using namespace std;

bool isVowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}
char tolower(char c){
    return (c - 'A') + 'a';
}

int main()
{
    string s, ans = "";
    cin >> s;

    for(int i = 0; s[i] != '\0'; i++){
        char c = s[i];

        if(c <= 'Z' && c >= 'A')    c = tolower(s[i]);

        if(!isVowel(c)){
            ans += '.';
            ans += c;
        }
    }
    cout << ans;
    
    return 0;
}