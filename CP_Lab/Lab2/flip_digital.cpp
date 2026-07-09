#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int sumOfSquare(int n) {
    int sum = 0;
    while(n) {
        int rem = n % 10;
        sum += (rem * rem);
        n /= 10;
    }
    return sum;
}

int step3(int n) {
    n = n / 10;
    return n % 100;
}

int fn(int n) {
    
    // step 1
    int sq = sumOfSquare(n);

    // step 2
    int st2 = 323 * sq;

    // step 3
    int st3 = step3(n);

    // step 4
    int st4 = st2 + st3;

    return st4;
}

int find(int rpm) {

    int maxRpm = rpm * 8;
    for(int i = 1; i <= 10; i++) {
        int newRpm = fn(rpm);
        // cout << i << " " << newRpm << endl;
        if(newRpm >= maxRpm) return newRpm;
        rpm = newRpm;
    }

    return -1;
}

int main() {
    int rpm;
    cout << "Enter your value of rpm: ";
    cin >> rpm;
    int finalRpm =find(rpm); 
    if (finalRpm == -1)
    {
        cout << "Cannot be sold";
    } else {
        cout << "Final RPM is: " << finalRpm;
    }
    
    return 0;
}