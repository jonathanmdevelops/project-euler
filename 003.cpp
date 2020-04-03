// What is the largest prime factor of the number 600851475143?

#include <math.h>
#include <iostream>

// Returns the smallest factor of n, which is in the range [2, n]. The result is always prime.
long SmallestPrimeFactor(const long kNumber) {
    for(long i = 2; i <= sqrt(kNumber); ++i) {
        if(kNumber % i == 0) {
            return i;
        }
    }
    // kNumber itself must be prime
    return kNumber;
}

int main() {
    long n = 600851475143;
    // Continously divide n by its smallest prime factor until p >= n
    while(true) {
        long p = SmallestPrimeFactor(n);
        if(p < n) {
            n /= p;
        } else{
            std::cout << n << std::endl;
            break;
        }
    }
    return 0;
}