#include <iostream>
using namespace std;

int main()
{
    int a[7];
    for(int i = 0; i < 7; i++) {
        cin >> a[i];
    }
    
    int i = 0, j = 6;
    
    while(i < j) {
        a[i] = a[i] + a[j];
        a[j] = a[i] - a[j];
        a[i] = a[i] - a[j];
        i++;
        j--;
        // swap(a[i++], a[j--]);
    }
    
    cout << "Reverse of Array: ";

    for(int i = 0; i < 7; i++) {
        cout << a[i] << " ";
    } cout << endl;
    return 0;
}