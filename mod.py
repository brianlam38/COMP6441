#!/usr/bin/

y = 1
mod = 18
x = pow(2,y)

while x%mod != 1:
	x = pow(2,y)
	y += 1
	print(y)
	print(x)

print y