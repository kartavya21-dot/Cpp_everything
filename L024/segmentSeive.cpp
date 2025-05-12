#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to find all prime numbers up to √R using the sieve of Eratosthenes
vector<int> simpleSieve(int limit) {
    vector<bool> isPrime(limit + 1, true);
    vector<int> primes;

    // Mark non-primes
    for (int i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i)
                isPrime[j] = false;
        }
    }

    // Collect all primes
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

// Function to find all primes in the range [L, R]
void segmentedSieve(int L, int R) {

    // Step 1: Find all primes up to √R
    int limit = sqrt(R);
    vector<int> primes = simpleSieve(limit);

    // Step 2: Create a boolean array for the range [L, R]
    vector<bool> isPrime(R - L + 1, true);
    for(int i : primes){
        cout << i << " ";
    }
    cout << endl;
    // Step 3: Mark non-primes in the range [L, R]
    for (int prime : primes) {
        // Find the starting point to mark multiples of 'prime'
        int start = max(prime * prime, (L + prime - 1) / prime * prime);  // (L + prime - 1) / prime : is used to find ceiling of (L / prime).
        

        // Mark multiples of 'prime' in the range [L, R] as non-prime
        for (int j = start; j <= R; j += prime) {
            isPrime[j - L] = false;
        }
    }

    // Step 4: Collect all primes in the range [L, R]
    for (int i = 0; i <= R - L; i++) {
        if (isPrime[i] && (i + L) != 1) { // Avoid marking 1 as prime
            cout << (i + L) << " ";
        }
    }
    cout << endl;
}

int main() {
    int L = 4, R = 25;
    cout << "Primes in range [" << L << ", " << R << "] are: ";
    segmentedSieve(L, R);
    return 0;
}
