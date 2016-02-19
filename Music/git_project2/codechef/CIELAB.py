A,B = map(int,raw_input().split())
A = A - B
if A%10 == 9:
	A = A - 1
else:
	A = A + 1
print A