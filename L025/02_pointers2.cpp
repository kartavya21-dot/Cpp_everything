#include <iostream>
using namespace std;

int main(){
    // pointer to int is created, and pointing to some garbage
    // therfore we usually point it to 0, which gives segfault : pointing to something which does not exist
    // int *p;
    // cout << *p << endl;

    /*
    int i = 5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;
    */

    /*
    int num = 5;
    int *p = &num;
    int a = *p;
    a++;
    cout << "Value of num : " << num << endl; // 5

    (*p)++; // Remember to place it *p in parentheses
    cout << "Value of num : " << num << endl; // 6
    */

    //Copying a Pointer
    /*
    int *q = p;
    cout << p << " " << q;
    */

    //Pointer Arithimetic
    int i = 3;
    int *t = &i;
    (*t)++;
    cout << *t << endl;

    cout << "Before t " << t << endl;
    t++;
    cout << "After t " << t << endl;
    cout << "You can also do this: " << t[0] << endl;


    int arr[] = {1, 3, 4, 5};
    cout << *arr << endl;
    cout << (arr + 1)[0];

    return 0;
}