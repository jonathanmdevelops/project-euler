total = 0
for x in range(3,1000):
	if x % 3 == 0 or x % 5 == 0:
		total = total + x
print total