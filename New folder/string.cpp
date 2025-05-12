#include <iostream>
#include <string>
using namespace std;

string yes(int size, string str){
    size = str.size();
    if ( size == 1 )
    {
        return "YES";
        // cout<<"YES";
    }
    return "NO";
}

int main()
{
    string str = "abcdefgh";
    int size = str.size();
    cout<<str[0]<<" "<<str[1];
    cout<<yes(size, str);
    
    return 0;
}