# your code goes here
# your code goes here
x,y,z = map(int,raw_input().split())
clones = 0
reqd = 1.0 * x * z / 100
#print reqd - y
if y < reqd:
	clones = reqd - y
	clones = int(clones)
	if clones < reqd - y:
		clones = clones + 1
print int(clones)