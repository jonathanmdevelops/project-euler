from math import sqrt
from prime import is_prime


n = 600851475143
divisor = int(sqrt(n))

while divisor > 1:
	if n % divisor == 0 and is_prime(divisor):
		print divisor
		break
	divisor -= 1