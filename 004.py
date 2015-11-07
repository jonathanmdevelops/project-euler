def largestPalindromeProductThreeDigits():
	largest = 0
	for x in xrange(999, 100, -1):
		for y in xrange(x, 100, -1):
			product = x * y
			s = str(product)
			if s == s[::-1]:
				largest = max(largest,product)
	return largest

print largestPalindromeProductThreeDigits()