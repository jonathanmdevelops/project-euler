from math import sqrt

def num_divisors(x):
	result = 0
	k = sqrt(x)
	for i in range(1, int(k) + 1):
		if x % i == 0:
			result += 2
	if k**2 == x:
		result -= 1
	return result

triangular = 0
i = 1
while True:
	triangular += i
	if num_divisors(triangular) > 500:
		break
	i += 1
print str(triangular)