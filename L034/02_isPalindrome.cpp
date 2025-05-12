#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string s, int i = 0){
    int j = s.length() - 1 - i;
    if(i > j)
        return true;

    if(s[i] != s[j])
        return false;
    else
        return isPalindrome(s, i + 1);
    

}
int main()
{
    string s = "abcdcb";
    cout << (isPalindrome(s) ? "yes" : "no");
    return 0;
}