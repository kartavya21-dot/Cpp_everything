#include <iostream>
using namespace std;

void print (int *p){

    cout << *p << endl;

}

void update1(int *p){

    p = p + 1; // doesnt change the original value, because the pointer is passed by valeu
    //cout << "Inside the functi on " << p << endl;

}
void update2(int *p){

    *p = *p + 1; 
    //cout << "Inside the functi on " << p << endl;

}

int getSum(int arr[], int n){ // getSum(int *arr, int n) , works fine

    cout << sizeof(arr) << endl; // Size of the arr = 4 => is size of pointer

    int sum = 0;
    *(arr + 4) = 3;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;

    return sum;
}

int main()
{
    int value = 5;
    int *p = &value;

    // print(p);

    // cout << "Before " << p << " and value : " << *p << endl; // Address remains unchanged, value changed
    // update1(p);  
    // update2(p);
    // cout << "After " << p  << " and value : " << *p << endl; // Address remains unchanged, value changed

    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Sum is " << getSum(arr + 1, 5) << endl; // Pointer is passed, and not the whole array.

    return 0;
}