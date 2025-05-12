#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5); // complexity O(log n)
    s.insert(5);
    s.insert(3);
    s.insert(8); 
    s.insert(0);

    for (int i : s)
    {
        cout << i << " ";
    }cout << endl; 
    
    set<int> :: iterator it = s.begin();
    it++;

    s.erase(it);

    for (int i : s)
    {
        cout << i << " ";
    }cout << endl; 


    cout<<"5 is present or not: " << s.count(5)<<endl; // boolean value

    set<int>:: iterator itr = s.find(5);  // .find() is O(log n);

    for (auto it = itr ; it != s.end() ; it++)
    {
        cout << *it << " ";
    }cout << endl;  // prints : 5 8 
    


    return 0;
}