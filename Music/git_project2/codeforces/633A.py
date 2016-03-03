# your code goes here
a,b,c = map(int,raw_input().split())
if c%a==0 | c%b==0:
	print "Yes"
elif c<a & c<b:
	print "No"
else:
	maxa = max(a,b)
	mina = min(a,b)
	ans = 1
	while c>0:
		c = c - maxa
		if c<0:
			c = c + maxa
			c = c - mina
			if c<0:
				ans = 0
				break
		else:
			if c%mina == 0:
				break
	if ans:
		print "Yes"
	else:
		print "No"
				
