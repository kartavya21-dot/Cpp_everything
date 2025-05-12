#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main()
{
    vector<string> ans = {"3", "30", "34", "5", "9"};
    sort(ans.begin(), ans.end());

    for(auto i: ans){
        cout << i << " ";
    }
    return 0;
}