#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "4 is present or not: " << binary_search(v.begin(), v.end(), 5) << endl;   //returns boolean value

    cout << "Lower bound: " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;  
    cout << "Upper bound: " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl << endl;  

    int a = 3;
    int b = 5;
    cout << "Max: " << max(a, b) << endl;
    cout << "Min: " << min(a, b) << endl;

    cout << "Before Swap: a : " << a << ", b : " << b << endl; 
    swap(a, b);
    cout << "After Swap: a : " << a << ", b : " << b << endl << endl; 

    string s = "abcd";
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl << endl;


    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After rotate: " << endl;
    for(int i: v){
        cout << i << " ";
    }cout << endl << endl;

    sort(v.begin(), v.end()); 
    cout << "After sort: " << endl;
    for(int i: v){
        cout << i << " ";
    }cout << endl;

    return 0;
}