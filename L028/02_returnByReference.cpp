#include <iostream>
using namespace std;

int& func(int a){
    int num = a;
    int& ans = num;
    return ans;
}
int main()
{
    int n = 5;
    cout << func(n);


    return 0;
}