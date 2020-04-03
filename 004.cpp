// Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
#include <string>
#include <bits/stdc++.h>

bool IsPalindrome(const int kNumber) {
    const std::string number_string = std::to_string(kNumber);

    std::string::size_type j = number_string.size() - 1;
    for(std::string::size_type i = 0; i <= j; ++i) {
        if(number_string[i] != number_string[j]) {
            return false;
        }
        --j;
    }
    return true;
}

int main() {
    int product;
    int current_largest_palidrome = 0;

    for(short a = 999; a > 99; --a) {
        for(short b = 999; b > 99; --b) {
            product = a * b;
            if(IsPalindrome(product) && product > current_largest_palidrome) {
                current_largest_palidrome = product;
            }
        }
    }
    std::cout << current_largest_palidrome << std::endl;

    return 0;
}