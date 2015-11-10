def is_evenly_divisible(n):
	for divisor in range(2, 21):
		if (n % divisor) != 0:
			return False
	return True

n = 2520

while True:
	if is_evenly_divisible(n):
		print n
		break
	n += 1