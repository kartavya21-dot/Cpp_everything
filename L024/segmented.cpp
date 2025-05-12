#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> seg(int limit){
    vector<bool> prime(limit + 1, true);

    for(int i = 2; i * i <= limit; i++){

        if(prime[i]){
            for(int j = i * i; j < limit; j += i)
                prime[j] = 0;
        }
    }

    vector<int> primes;

    for(int i = 2; i <= limit; i++){
        if(prime[i])
            primes.push_back(i);
    }

    return primes;
}

void primes(int L, int R){
    int limit = sqrt(R);
    vector<int> primes = seg(limit);

    for(int i : primes)
        cout << i << " ";
    cout << endl;

    vector<bool> number(R - L + 1, true);

    for(int i : primes){

        for(int j = L; j <= R; j += i){
            number[j - L] = false;
        }

    }

    for(int i = 0; i <= R - L; i++){
        if(number[i] && (i + L) != 1){
            cout << i + L << " ";
        }
    }
    cout << endl;
}

int main()
{
    int L = 4, R = 25;
    primes(L, R);
    return 0;
}