#!/usr/bin/python

lowerTerm = 1
higherTerm = 2
total = 0

while higherTerm < 4000000:
  if higherTerm % 2 == 0:
    total = total + higherTerm
  temp = higherTerm
  higherTerm = higherTerm + lowerTerm
  lowerTerm = temp

print total
