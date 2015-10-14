# your code goes here
ans = set()
word = str(raw_input())
for c in word:
	if c in 'abcdefghijklmnopqrstuvwxyz':
		ans.add(c)

print(len(ans))