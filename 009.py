def pythagorean_triplet():
	for a in xrange(1, 1000):
		for b in xrange(a, 1000):
			for c in xrange(b, 1000):
				if sum([a,b,c]) == 1000 and ((a**2) + (b**2)) == (c ** 2):
					return a * b * c

print pythagorean_triplet()