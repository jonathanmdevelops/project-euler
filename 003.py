from math import sqrt

def is_prime(n):
	start = int(sqrt(n))
	while start > 1:
		if n % start == 0:
			return False
		start -= 1
	return True


n = 600851475143
divisor = int(sqrt(n))

while divisor > 1:
	if n % divisor == 0 and is_prime(divisor):
		print divisor
		break
	divisor -= 1