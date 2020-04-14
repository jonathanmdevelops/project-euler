// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

// a^2 + b^2 = c^2
// For example, 32 + 42 = 9 + 16 = 25 = 52.

// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include <iostream>

int main() {
    const int TARGET = 1000;
    // a must be < TARGET/3 - 1 if a < b < c
    const int MAX_A = TARGET/3 - 2;
    for(int a = 1; a < MAX_A; ++a) {
        // b must be a < b < c, so the largest b can be is one less than
        // what is left to make up to the target, halved
        for(int b = a + 1; b < (TARGET - a)/2; ++b) {
            int c = TARGET - a - b;
            int a_squared = a * a;
            int b_squared = b * b;
            int c_squared = c * c;
            if((a_squared + b_squared) == c_squared) {
                std::cout << a*b*c << std::endl;
                exit;
            }
        }
    }
}