// Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. 
// What is the value of this product?

#include <cassert>

#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::string input;
    std::string line;

    std::ifstream file_stream("008.txt");

    if(file_stream.is_open()) {
        while(std::getline(file_stream, line)) {
            input += line;
        }
    }
    file_stream.close();
    // Check we have all the characters
    assert(input.size() == 1000);

    long product;
    long largest_product = 0;

    // Iterate through the string in sets of thirteen
    for(std::string::size_type i = 0; i < input.size() - 13; ++i) {
        start_loop:
        product = 1;
        for(std::string::size_type j = i; j < i + 13; ++j) {
            // If the character is ever 0, we can break
            // and skip over all products that will include it
            if(input[j] == '0') {
                i = j+1;
                goto start_loop;
            }
            product *= input[j] - '0';
        }
        largest_product = std::max(product, largest_product);
    }
    std::cout << largest_product << std::endl; 
    return 0;
}