from fractions import gcd
t= int(raw_input())
i = 0
while i<t:
	a,b = map(int,raw_input().split())
	temp = (a*b)/gcd(a,b)
	print gcd(a,b) + " " + temp
	i = i + 1
