#include <iostream>
using namespace std;

// 1 -> in case of even       0 -> in case of odd
bool isEven(int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int num;
    cin >> num;
    int max, min;
    min = num;
    max = min = num;
    cout << min << num << max;

    if (isEven(num)){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }

    return 0;
}