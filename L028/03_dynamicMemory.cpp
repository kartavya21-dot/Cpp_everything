#include <iostream>
using namespace std;

int getSum(int *arr){
    int sum = 0;
    for(int i = 0; i < 5; i++)
        sum += arr[i];
    return sum;
}
int main()
{
    // char ch = 'q';
    // cout << sizeof(ch) << endl;

    // char* c = &ch;
    // cout << sizeof(c) << endl;

    int* arr = new int[5];
    for(int i = 0; i < 5; i++)
        cin >> arr[i];
    
    int sum = getSum(arr);
    cout << "Sum: " << sum << endl;

    return 0;
}