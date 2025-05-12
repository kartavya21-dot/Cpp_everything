#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char c;
    cout << " Enter the value of a " << endl;
    cin >> a;

    cout << " Enter the value of b " << endl;
    cin >> b;

    cout << " Enter the opeeration  " << endl;
    cin >> c;

    switch (c)
    {
    case '+':
        cout << a + b;
        break;

    case '-':
        cout << a - b;
        break;

    case '*':
        cout << a * b;
        break;

    case '/':
        cout << a / b;
        break;

    case '%':
        cout << a % b;
        break;
    }
}