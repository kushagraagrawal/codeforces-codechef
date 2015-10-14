# your code goes here
from fractions import gcd
x,y,z = map(int,raw_input().split())
n = 0
while z>0:
	if n%2==0:
		z = z - gcd(x,z)
		n = n + 1
	elif n%2==1:
		z = z - gcd(y,z)
		n = n + 1
if n%2==0:
	print "1"
else :
	print "0"