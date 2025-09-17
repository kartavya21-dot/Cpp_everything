#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

double max(double a, double b){
    return a > b ? a : b;
}

double solve(vector<int>& lights, int l){
    sort(lights.begin(), lights.end());
    int n = lights.size();
    double ans = lights[0];
    
    for(int i = 1; i < n; i++){
        // cout << lights[i] << " ";
        double d = (double)(lights[i] - lights[i - 1]) / 2.0;
        ans = max(d, ans);
        // cout << d << " " << ans << endl;;
    }
    ans = max(ans, (double)(l - lights[n - 1]));
    return ans;
}

int main()
{
    int n, l, i = 0;
    
    cin >> n >> l;
    vector<int> lights(n);

    while(n > 0){
        int light;
        cin >> light;
        lights[i] = light;
        i++;
        n--;
    }
    cout << fixed << setprecision(10) << solve(lights, l);
    
    return 0;
}