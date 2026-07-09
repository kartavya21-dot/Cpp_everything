#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = INT_MIN;
    while (n > 0)
    {
        int i;
        cin >> i;
        ans = max(ans, i);
        n--;
    }

    cout << "Max of all numbers: " << ans;

    
    return 0;
}