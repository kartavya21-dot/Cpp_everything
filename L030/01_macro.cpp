#include <iostream>
#include <algorithm>
using namespace std;

#define min(a,b) ((a<b)?a:b)
#define PI 3.14
#define Insta Follower
#define Follower 25

#define ELE 1, \
            2, \
            3
int main()
{
    double r = 5;
    cout << "Area is: " << PI*r*r << endl;

    cout << "Minimum is: " << min(5, 6) << endl;

    cout << "Instagram Followers: " << Insta << endl;

    int arr[] = {ELE};

    for(int i = 0; i < 3; i++)
        cout << arr[i] << " ";


    return 0;
}