#include <iostream>
using namespace std;

// void update(int a){
//     a = a/2;
// }

// int main()
// {
//     int a = 10;
//     update(a);
//     cout<<a;
    
//     return 0;
// }

// int update(int a){
//     a -= 5;
//     return a;
// }
// o/p is 10 

// int main()
// {
//     int a = 10;
//     update(a);
//     cout<<a;
    
//     return 0;
// }
// o/p is 10

int update(int a){
    a = a/2;
    return a;
}

int main()
{
    int a = 10;
    a=update(a);
    cout<<a;
    
    return 0;
}
// o/p is 5