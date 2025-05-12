#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m; // values can be entered by space, enter, and tab keys

    if (n > 0)
    {
        cout << "n is +ve" << endl;
    }
    else if (n < 0)
    {
        cout << "n is -ve" << endl;
    }
    else
    {
        cout << "n is zero" << endl;
    }

    if (n > m)
    {
        cout << "N is greater";
    }
    else
    {
        cout << "M is greater";
    }
}