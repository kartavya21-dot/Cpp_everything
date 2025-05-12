#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    cout << a << endl;

    if (true)
    {
        int a = 5;
        cout << a << endl; // o/p is 5

        int b = 4;
        cout << b << endl; // o/p is 4
    }

    cout << a << endl; // op is 3

    // cout << b << endl; // you can't access b as it gets terminated in if block

    int a = 6;
    cout << a << endl; // error, cos you cant redifine variable

    int i = 8;
    for (int i = 0; i < 8; i++)
    {
        cout << "Hello, How are?" << endl; // will use i = 0 and not 8
    }
    //ek block ({""}) me ek hi same name ka variable reh sakta
       
}