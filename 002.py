total = 2
a = 1
b = 2
while b <= 4000000:
	temp = b
	b = a + b
	a = temp
	if b % 2 == 0:
		total = total + b
print total