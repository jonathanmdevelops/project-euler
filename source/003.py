#!/usr/bin/python

from math import sqrt
from prime import isPrime

NUMBER = 600851475143

for i in range(2, int(sqrt(NUMBER))):
  if NUMBER % i == 0 and isPrime(i):
    largestPrimeFactor = i

print largestPrimeFactor
