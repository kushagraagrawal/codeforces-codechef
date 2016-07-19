s = raw_input()
a = s[0]
d = s[2:s.find('e')]
b = int(s[s.find('e') + 1:]) + 1
a = a+d
#print d
while len(a)<b:
	a+='0'
a = a[:b] + '.' + a[b:]
while a[0]=='0':
	a = a[1:]
while a[-1]=='0':
	a = a[:-1]
if a[0] == '.':
	a = '0' + a
if a[-1] == '.':
	a = a[:-1]
print a