#include <iostream>
using namespace std;

// double min(double x, double y){
//     return x < y ? x : y;
// }
int min(int x, int y){
    return x < y ? x : y;
}

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int option1 = n * a;
    int option2 = ((n / m) * b) + ((n % m) * a);
    int option3 = ((n + m - 1) / m) * b;
    
    cout << min(option1, min(option2, option3));

    return 0;
}