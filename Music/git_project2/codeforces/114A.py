k = int(raw_input())
l = int(raw_input())
temp = k
x = 1
flag = 1
while  flag:
	if k**x == l:
		flag = 0
		print "YES"	
		print x - 1
		break
	elif k**x > l:
		print "NO"
		break
	x = x+1