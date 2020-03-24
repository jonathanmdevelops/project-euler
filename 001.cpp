// Find the sum of all the multiples of 3 or 5 below 1000

#include <iostream>

int main() {
    const short LIMIT = 1000;
    int sum = 0;

    for(int i = LIMIT; i--; i > 2) {
        (i % 3 == 0 || i % 5 == 0)? sum += i:sum += 0;
    }
    std::cout << sum << std::endl;
    return 0;
}