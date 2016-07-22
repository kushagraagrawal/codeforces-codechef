from collections import Counter
n, d = map(int,raw_input().split())
result = []
o = 0
for i in xrange(d):
	enemies = raw_input()
	if enemies.count('1')==n:
		o = o + 1
	else:
		result.append(o)
		
if result:
	print(Counter(result).most_common(1)[0][1])
else:
	print(0)