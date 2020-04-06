// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>

// Returns true iff n is evenly divisible by all numbers [1,20]
const bool IsEvenlyDivisibleByTwenty(const int n) {
    // We don't need to test [2.10] because these are factors of higher multiples
    // e.g. If a number is divisible by 14 it must also be divisible by 7
    for(auto i = 11; i <= 20; ++i) {
        if(n % i != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int i = 2521;
    while(!IsEvenlyDivisibleByTwenty(i)) {
        ++i;
    }
    std::cout << i << std::endl;
    return 0;
}