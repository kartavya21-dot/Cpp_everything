#include <iostream>
using namespace std;

float random(int a){
    float ans = (a*6 + 9) % 2;
    return ans;
}

int main()
{
    int a; 
    cin>>a;
    cout << "rando: " << random(a) << endl;
    return 0;
}