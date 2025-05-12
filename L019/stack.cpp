#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("is");
    s.push("Name");
    s.push("My");    
    
    cout << "Top Elemnt is: " << s.top() << endl;

    s.pop();

    cout << "Top Element after pop is: " << s.top() << endl;

    cout << "Size of Stack is : " << s.size() << endl;

    cout << "Empty or Not : " << s.empty() << endl;
    return 0;
}