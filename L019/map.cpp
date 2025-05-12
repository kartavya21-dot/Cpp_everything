#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "My";    
    m[2] = "Name";   
    m[13] = "is";
    m[13] = "ifs";

    m.insert({5, "hello"}); //O(log n)

    cout << "Before Erase: " << endl;

    for (auto i : m)
    {
        cout << i.first << ". " << i.second << endl; // prints : My Name hello is
    }cout << endl;

    cout << "Finding 13 --> " << m.count(13) << endl;   //O(log n)

    // m.erase(13); //O(log n)
    cout << "After Erase: " << endl;
    for (auto i : m)
    {
        cout << i.first << ". " << i.second << endl; // prints : My Name hello
    }cout << endl;

    auto it = m.find(5);
    for (auto i = it ; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
    

    return 0;
}