#include <iostream>
using namespace std;

int main()
{
    int i, n, sum;
    sum = 0;
    i = 1;
    cin >> n;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    cout << sum;
}