#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(5);

    //d.pop_back();
    //d.pop_front();

    int frontElement = d.front();
    int backElement = d.back();
    bool emptyOrNot = d.empty();

    cout << "Before Erase: " << d.size() << endl;
    d.erase(d.begin(), d.begin()+1);
    cout << "After Erase: " << d.size() << endl; 

    for(int i : d){
        cout << i << " "; 
    }

    return 0;
}