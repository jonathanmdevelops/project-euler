// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number?

#include <iostream>

// Returns true iff n is prime
bool IsPrime(const long n) {
    for(long i = n/2; i > 1; --i) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // We already know the 6th prime is 13
    int count = 6;
    long i = 13;
    while(count < 10001) {
        ++i;
        count = IsPrime(i)? count+1:count;
    }
    std::cout << i << std::endl;
    return 0;
}