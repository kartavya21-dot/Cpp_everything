#include <iostream>
#include <algorithm>
using namespace std;

void reverse(string& s, int i, int j){
    if(i > j)
        return;
    swap(s[i], s[j]);
    return reverse(s, ++i, --j);
}

int main()
{
    string s = "hello world";
    int i = 0, j = s.length() - 1;
    reverse(s, i, j);
    cout << "Reversed string: " << s << endl;
    return 0;
}