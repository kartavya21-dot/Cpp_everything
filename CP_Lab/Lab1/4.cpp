#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Give Size of Array: ";
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int a, b, c;
    cout << "Give Three Sizes: ";
    cin >> a >> b >> c;
    int a1[a], a2[b], a3[c];
    for(int i = 0; i < a; i++) {
        a1[i] = arr[i];
    }
    for(int i = a; i < a + b; i++) {
        a2[i - a] = arr[i];
    }
    for(int i = a + b; i < size; i++) {
        a3[i - a - b] = arr[i];
    }
    cout << endl << "First Array: ";
    for(int i = 0; i < a; i++) {
        cout << a1[i] << " ";
    }
    cout << endl << "Second Array: ";
    for(int i = 0; i < b; i++) {
        cout << a2[i] << " ";
    }
    cout << endl << "Third Array: ";
    for(int i = 0; i < c; i++) {
        cout << a3[i] << " ";
    }
    return 0;
}