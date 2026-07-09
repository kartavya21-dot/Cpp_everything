#include <iostream>
using namespace std;

int main()
{
    int n = 5, count = 0;
    int a[5] = {1, 2, -2, -1, 0};

    for(int i = 0; i < n; i++){ 
        if(a[i] < 0)   count++;
    }
    
    cout << "No. of negative numbers: " << count;

    return 0;
}