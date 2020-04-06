// Find the difference between the sum of the squares of the first 
// one hundred natural numbers and the square of the sum.

#include <cstdlib>
#include <iostream>

int main() {
    const int n = 100;
    // Sum of 1..n is n/2 + n+1
    int square_of_sum = (n/2) * (n+1);
    square_of_sum *= square_of_sum;

	int sum_of_square = 0;
	for (int i = 1; i <= n; ++i) {
		sum_of_square += i * i;
	}
    std::cout << std::abs(square_of_sum - sum_of_square) << std::endl;
    return 0;
}