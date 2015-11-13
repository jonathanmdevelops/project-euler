from math import sqrt

def is_prime(n):
	start = int(sqrt(n))
	while start > 1:
		if n % start == 0:
			return False
		start -= 1
	return True