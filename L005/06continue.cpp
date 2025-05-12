#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Hi" << endl;
        cout << "Hello" << endl;
        continue;    // anything below this code becomes unreachable and loop continues
        cout << "How are?" << endl;
    }
}