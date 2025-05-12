#include <iostream>
using namespace std;

 //POTD , July 16 , GFG -----------solved

string printString(string s, char ch, int count)
{
    int i;
    for (i = 0; s[i] != '\0' && count != 0; i++)
    {
        cout << i + 1 << "." << endl;;


        if (s[i] == ch)
        {
            cout << " I am in condition" << endl;
            count--;
        }
        
    }
        s.erase(s.begin() , s.begin() + i );
    return s;
}

int main()
{
    string s = "Thisisdemostring";
    char ch = 'i';
    int count = 3;

    s = printString(s, ch, count);

    for (int i = 0; s[i] != '\0'; i++)
    {
        cout << s[i] << " ";
    }
    

    return 0;
}