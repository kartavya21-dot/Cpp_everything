#include <iostream>
#include <math.h>
using namespace std;

int sqrtInt(int x)
{
    int s = 0;
    int e = x;
    long mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        long square = mid * mid;

        if (square == x)
        {
            return mid;
        }
        else if (square < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double precision(int n, int prec){
    float ans = sqrtInt(n);
    float p = pow(10, -prec);
    cout << p;
    while (ans * ans < n)
    {
        ans = ans + p;
    }
    
    return ans;
    
}

int main()
{
    int n;
    cin >> n;
    cout << "sqrt of n: " << sqrtInt(n) << endl;
    cout << "sqrt of n: " << precision(n, 5);
    return 0;
}