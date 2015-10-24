# your code goes here
a,b,c = map(int,raw_input().split())
x = 1
d = []

count = 0
while x<=81:
	temp = (b * (x**a)) + c
	summ = 0
	n = temp
	while temp>0:
		summ = summ + (temp%10)
		temp = temp /10
	if summ == x and n < 1000000000:
		d.append(str(n))
		count = count + 1
	x = x+1
print count
print ' '.join(d)
