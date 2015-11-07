from math import sqrt

def isPrime(n):
	start = int(sqrt(n))
	while start > 1:
		if n % start == 0:
			return False
		start -= 1
	return True

def largestPrimeFactor(n):
	m = int(sqrt(n))
	while m > 1:
		if n % m == 0 and isPrime(m):
			return m
		else:
			m -= 1
	return 1

print largestPrimeFactor(600851475143)