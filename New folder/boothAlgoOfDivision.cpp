#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>

using namespace std;
void boothsAlgorithm(int multiplicand, int multiplier, int numBits) {
    int totalBits = numBits * 2;
    int m = multiplicand;
    int q = multiplier;
    int a = 0;
    int q_1 = 0;

    for (int i = 0; i < numBits; i++) {
        int lastTwoBits = ((q & 1) << 1) | q_1;

        if (lastTwoBits == 0b10) {
            a -= m;
        } else if (lastTwoBits == 0b01) {
            a += m;
        }

        q_1 = q & 1;
        q = (q >> 1) | ((a & 1) << (numBits - 1));
        a = a >> 1;
    }

    int result = (a << numBits) | q;
    cout << "Final result (decimal): " << result << endl;
}

int main() {
    int num1, num2, numBits = 4;
    
    cout << "Enter multiplicand (decimal): ";
    cin >> num1;
    
    cout << "Enter multiplier (decimal): ";
    cin >> num2;
    
    cout << "\nPerforming multiplication using Booth's algorithm...\n" << endl;
    
    boothsAlgorithm(num1, num2, numBits);
    
    return 0;
}