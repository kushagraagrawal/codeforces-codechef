a,b,c = map(int, raw_input().split())
temp1 = a%c > 0
temp2 = b%c > 0
ans = (a/c + temp1) * (b/c + temp2)
print ans