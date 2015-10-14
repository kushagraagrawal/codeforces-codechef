n = int(raw_input())
 
sumx = 0
sumy = 0
sumz = 0
x = 0
y = 0
z = 0
a = 0
while a<n:
	x,y,z = map(int,raw_input().split())
	sumx += x
	sumy += y
	sumz += z
	a += 1
if sumx ==0 and sumy==0 and sumz ==0:
	print "YES"
else:
	print "NO"