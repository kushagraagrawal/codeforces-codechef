input1 = int(raw_input())
first = 0
second = 0
temp = 0
newFib = 1
while newFib < input1:
	first = second
	temp = newFib
	newFib = newFib + second
	second = temp
if input1 == 1:
	second = 1
print second - first + " " + first + " " + first
	