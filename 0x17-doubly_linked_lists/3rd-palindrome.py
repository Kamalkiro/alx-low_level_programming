#!/usr/bin/python3
big = 0
for i in range(1000):
	for j in range(1000):
		mul = i *j
		if str(mul) == str(mul)[::-1]:
			if mul > big:
				big = mul
print (big)
