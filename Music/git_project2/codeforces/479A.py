# your code goes here
a = input()
b = input()
c = input()
d = max(a,b,c)
''' possible cases
(a+b)*c
a*(b+c)
a+b*c
a*b+c
a*b*c
a+b+c
'''
print max((a+b)*c,a*(b+c),a+b*c,a*b+c,a*b*c,a+b+c)