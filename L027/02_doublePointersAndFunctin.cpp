#include <iostream>
using namespace std;

void update(int **p2){
    // p2 = p2 + 1;
    // Nothing changes, because the pointer is passed by value

    // *p2 = *p2 +  1;
    // Changes the value of *p2 in main function

    **p2 = **p2 + 1;
}
int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "Before : " << i << endl;
    cout << "Before : " << p << endl;
    cout << "Before : " << p2 << endl;
    cout << "----------------------------" << endl;
    update(p2);
    cout << "After : " << i << endl;
    cout << "After : " << p << endl;
    cout << "After : " << p2 << endl;
    return 0;
}