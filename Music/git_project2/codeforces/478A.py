# your code goes here

a,b,c,d,e = map(int,raw_input().split())
sum1 = a+b+c+d+e
if sum1==0:
	print -1
elif sum1%5 == 0:
	print sum1/5
else:
	print -1
