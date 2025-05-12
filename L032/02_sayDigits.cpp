#include <iostream>
using namespace std;

void say(int n, string arr[]){
    if(n == 0) return;

    int dig = n % 10;
    n /= 10;
    say(n, arr);

    cout << arr[dig] << " ";
}
int main()
{
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

    int n;
    cin >> n;
    say(n, arr);
    cout << endl;
    return 0;
}