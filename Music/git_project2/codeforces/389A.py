from fractions import gcd
n = int(raw_input())
x = int(raw_input())
for s in range(n-1):
	s = int(raw_input())
	s = gcd(s,x)
print s*n
