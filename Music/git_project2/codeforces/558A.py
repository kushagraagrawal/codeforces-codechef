# your code goes here
n = int(raw_input())
mn = 200
ans = 0
for x in range(n):
	a, b = map(int,raw_input().split(' '))
	mn = min(mn,b)
	ans = ans + (a * mn)
print ans