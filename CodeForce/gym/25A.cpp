#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool firstOdd = true, firstEven = true;
    int oddInd = 0, evenInd = 0, i = 1, odd = 0, even = 0;

    while(n > 0){
        int a;
        cin >> a;
        if((a & 1) && firstOdd){
            oddInd = i;
            firstOdd = false;
        }
        if((!(a & 1)) && firstEven){
            evenInd = i;
            firstEven = false;
        }

        (a & 1) ? odd++ : even++;
        // cout << i++;
        i++;
        n--;
    }
    // cout << evenInd << oddInd ;

    cout << ((odd > even) ? evenInd : oddInd) << endl;

    return 0;
}