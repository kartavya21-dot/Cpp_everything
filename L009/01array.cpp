#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "Printing the Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl << "Printing Done:";
}
int main()
{
    // declare
    int number[5];

    // accessing an array
    // cout << "Value at 4 index is " << number[4] << endl;

    // cout << "Value at 6 index is "<< number[6]<<endl;   //provides garbage value

    // initialising an array
    int second[15] = {5, 4, 6};
    // accessing an array
    // cout << "Value at 3 index is " << second[2] << endl;

    // print the array
    // for (int i = 0; i < 15; i++)
    // {
    //     cout << second[i] << "  ";
    // }
    // cout << endl;

    int fourth[10] = {0};
    // printArray(fourth, 10);

    int fifth[10] = {1};
    int fifthSize = sizeof(fifth)/sizeof(int); //but if we want size of an array which is not fully filled (eg. arr[10]= { 2,3 } , size is 2), that is why put size of array in function too
    // cout << "Size of fifth is : " << fifthSize << endl;
    // printArray(fifth, 10);


    double firstDouble[5];
    float firstFloat[5];
    bool firstBool[5];


    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << ch[3] << endl;
    
    


    return 0;
}
