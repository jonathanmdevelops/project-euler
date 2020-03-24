// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#include <iostream>

int main() {
    const int LIMIT = 4000000;
    int sum = 0;

    // i and j hold the last and second-to-last numbers in the sequence respectively
    int i = 1;
    int j = 1;

    // temp is used as a temporary variable
    int temp;

    while (i <= LIMIT) {
        (i % 2 == 0)? sum += i:sum += 0;
        temp = i;
        i = i + j;
        j = temp;
    }

    std::cout << sum << std::endl;
    return 0;
}