#include <iostream>
using namespace std;

int main()
{
    int n = 4;

while (n++ < 8)
{
    switch (n)
    {
    case 5:
        cout << 5 << endl;
        continue;
    case 7:
        cout << 7 << endl;
        break;
    
    default:
        break;
    }
}

    
    return 0;
}