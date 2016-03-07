def c(n,r):
	if n==0:
		return 1
	if r==0:
		return 1
	else:
		return (c(n-1,r-1)*n)/r
n = int(raw_input())
print c(n,5)*(n)*(n-1)*(n-2)*(n-3)*(n-4)