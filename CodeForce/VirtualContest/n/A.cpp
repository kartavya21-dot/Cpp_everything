#include <iostream>
using namespace std;

int solve(int a, int b, int x, int y){

    if(a - 1 == b){
        return (a & 1) ? y : -1;
    }

    if(a > b)   return -1;

    if(x < y){
        return (b - a) * x;
    }

    int minToInc = min(x, y), cost = 0;

    while(a != b){
        // if((a & b)){
        //     cost += x;
        // }else{
        //     cost += minToInc;
        // }
        cost += ((a & 1) ? x : minToInc);
        a++;
    }
    return cost;
}

int main()
{
    int n;
    cin >> n;
    while(n > 0){
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        cout << solve(a, b, x, y) << endl;

        n--;
    }
    return 0;
}