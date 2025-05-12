#include <iostream>
using namespace std;

int main()
{
    char ch ='1';
    int num =3;

    switch (num)
    {
    case 3:
        cout << "Third" << endl;
        break;

    case 1:
        cout << "First" << endl;
        break;

    case '1':
        cout << "character 1" << endl;
        break;

    default:
        cout << "It is default case" << endl;

    }

}