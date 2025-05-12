#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //Max Heap
    priority_queue<int> maxi;

    //Min Heap
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(5);
    maxi.push(7);
     
    int n = maxi.size();

    for(int i = 0; i < n; i++){
        cout << maxi.top()<< " ";
        maxi.pop();
    } cout << endl;

    mini.push(3);
    mini.push(90323);
    mini.push(21);
    mini.push(30);

    n = mini.size();

    for(int i = 0; i < n; i++){
        cout << mini.top()<< " ";
        mini.pop();
    } cout << endl;

    cout << "Empty or not: " << mini.empty();

    return 0;
}