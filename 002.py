def calculateEvenValuedFibonacci(limit):
	total = 2
	a = 1
	b = 2
	while b <= limit:
		temp = b
		b = a + b
		a = temp
		if b % 2 == 0:
			total = total + b
	return total

print calculateEvenValuedFibonacci(4000000)