#include <iostream>
using namespace std;

bool checkIsPalindrome(int n) {
    int rev = 0, og = n;

    while(n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    // cout << rev << endl;

    if(rev == og)   return true;

    return false;
}

int main()
{
    int n = 5;
    bool flag = true; 
    while(n != 0) {
        int i;
        cin >> i;
        // cout << " ";
        if(!checkIsPalindrome(i)) {
            flag = false;
        }

        n--;
    }
    if(flag)    cout << "All are Palindorme";
    else cout << "All are not Palindrome";
    return 0;
}