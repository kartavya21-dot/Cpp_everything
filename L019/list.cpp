#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    list<int> n(l);
    list<int> a(5, 100); // 5 elements && initialised by 100

    l.push_back(1);
    l.push_front(2);

    //l.pop_back();
    //l.pop_front();

    for(int i : l){
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin()); //delets the element at which it is pointed in this case starting  element

    cout << "After Erase : " << endl;

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Size of list: " << l.size() << endl;

    return 0;
}