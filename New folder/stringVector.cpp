#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> s = {"apple" , "banana" , "cat"};
    cout << s[0][1]; //targeting individual letter of element in vector string;
    return 0;
}