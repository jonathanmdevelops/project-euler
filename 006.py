def sum_of_squares(numbers):
	r = [n ** 2 for n in numbers]
	return sum(numbers)

def square_of_sum(numbers):
	return sum(numbers) ** 2

numbers = range(1,101)
print abs(sum_of_squares(numbers) - square_of_sum(numbers))