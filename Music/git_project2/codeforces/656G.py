F, I, T = map(int, input().split())
#kitten
a = [0]*I
for i in range(F):
    s = input()
    for j in range(I):
        if s[j] == 'Y':
            a[j] += 1
ans = 0
for i in range(I):
    if a[i] >= T:
        ans+=1
print(ans)