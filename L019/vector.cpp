#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; //Doubles the capcity when element more than capacity are pushed

    vector<int> a(5, 1); //Size of Vector is 5, and every element is 1

    vector<int> b(a);  //copies vector a in b

    cout << "Capacity--> " << v.capacity() << endl;  // Capacity 0

    v.push_back(1);
    cout << "Capacity--> " << v.capacity() << endl;  // Capacity 1

    v.push_back(2);
    cout << "Capacity--> " << v.capacity() << endl;  // Capacity 2

    v.push_back(3);
    cout << "Capacity--> " << v.capacity() << endl;  // Capacity 4                     
    cout << "Size--> " << v.size() << endl;          // Size 3        

    int accessingElement = v.at(2);

    int firstElement = v.front();
    int lastElement = v.back();

    v.pop_back(); //pop the last element of vector
    v.clear();  //Size of vector is zero, but Capacity remains same
    

    return 0;
}