# your code goes here
from fractions import gcd
x,y = map(int,raw_input().split())
temp = 10**(x- 1 - (y % 10 == 0))
if x==1 and y==10:
	print "-1"
else:
	print temp * y
	
