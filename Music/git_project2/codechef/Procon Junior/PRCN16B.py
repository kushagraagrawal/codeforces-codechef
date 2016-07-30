T = int(raw_input())
for i in range(T):
	N = int(raw_input())
	temp = 0
	if N%2==0:
		temp = N/2
	else:
		temp = N/2 + 1
	print int((temp/2.0)*(2+(temp-1)*2))