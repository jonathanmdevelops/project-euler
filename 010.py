from prime import is_prime

total = 17
for n in range(10,2000000):
	if is_prime(n):
		total += n
print total