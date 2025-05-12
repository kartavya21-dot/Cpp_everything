#include <iostream>
using namespace std;

int main()
{
    // int arr[5] = {1, 2, 3, 4, 5};
    // char ch[6] = "abcde";

    // cout << arr << endl ; //prints the address of arr
    // cout << ch << endl ; //prints: abcde

    // char *c = &ch[0];
    // cout << c << endl; //prints: abcde

    char temp = 'z';
    char *p = &temp; 
    cout << p << endl;

    char ch[4] = "xyz";
    char *s = ch;
    cout << s << endl;

    char *c = "abc"; //very Risky, as the compiler stores the string literal in read only memory
    cout << c << endl;

    return 0;
}