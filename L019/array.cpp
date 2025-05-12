#include <iostream>

#include <array>
using namespace std;

int main()
{
    array<int, 5> a = {1, 2, 3, 4};  // It is also a static array

    int size = a.size();

    //Can be Random Access 
    int accessingArrayElement = a.at(2);  // or a[2]   : can be used too

    bool emptyOrNot = a.empty(); // returns boolean if empty or not

    int FirstElement = a.front(); 
    int LastElement = a.back(); 

    //Everything here is done in O(1).

    return 0;
}