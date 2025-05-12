#include <iostream>
using namespace std;

int nthStair(int n){
    if(n == 0)
        return 1;
    if(n < 0)
        return 0;
    
    return nthStair(n - 1) + nthStair(n - 2);
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    for(int i = 0; i < 7; i++){
        cout << "For arr[i] : " << arr[i] << " => " << nthStair(arr[i]) << endl;
    }
    return 0;
}