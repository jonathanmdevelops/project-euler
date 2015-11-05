def totalMultiplesOfThreeAndFive(limit):
	total = 0
	for x in range(3,limit):
		if x % 3 == 0 or x % 5 == 0:
			total = total + x
	return total

print totalMultiplesOfThreeAndFive(1000)
