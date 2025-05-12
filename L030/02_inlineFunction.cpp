#include <iostream>
using namespace std;
inline int max(int a, int b){
    return a > b ? a : b;
}
int main()
{
    int a = 5, b = 6;
    cout << "Max: " << max(a, b) << endl; // output: 6
    
    return 0;
}