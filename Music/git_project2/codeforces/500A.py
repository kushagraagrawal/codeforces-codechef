n,t = map(int,raw_input().split())
a = list(map(int,raw_input().split()))

current = 0
while current<t-1:
	current = a[current] + current
if current == t-1:
	print "YES"
else:
	print "NO"