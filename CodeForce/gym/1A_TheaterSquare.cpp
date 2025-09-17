#include <iostream>
using namespace std;

long long ceil(long long n, long long m){
    if(n % m == 0)  return n / m;
    return (n / m) + 1;
}
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long sum = 0;
    sum += (ceil(n, a) * ceil(m, a));
    cout << sum << endl;

    return 0;
}