#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        string name;
        string rollNo;
        long long contact;
};

int main()
{
    Student me;
    cout << "Enter your name: " ;
    getline(cin, me.name);
    cout << "Enter your roll number: " ;
    cin >> me.rollNo;
    cout << "Enter your contact: " ;
    cin >> me.contact;

    cout << "\nName: " << me.name << " Roll no.: " << me.rollNo << " Contact no.: " << me.contact;
    
    return 0;
}