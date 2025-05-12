#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> deg;
    string time;
    int q, A, B, X, Y;
    cin >> time >> q >> A >> B >> X >> Y;
    for(int i = 0; i < q; i++){
        int degree;
        cin >> degree;
        deg.push_back(degree);
    }
    
    return 0;
}