#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("My");
    q.push("Name");
    q.push("is");
    
    cout << "Size after pop: " << q.size() << endl;

    cout << "First Element is " << q.front() << endl;
    q.pop();
    cout << "First Element after pop is " << q.front() << endl;

    cout << "Size after pop: " << q.size() << endl;

    return 0;
}