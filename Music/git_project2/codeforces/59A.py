# your code goes here
word = str(raw_input())
count1,count2 = 0,0
for x in word:
	if x.isupper():
		count1 = count1 + 1
	elif x.islower():
		count2 = count2 + 1
if count1 > len(word)/2:
	print word.upper()
elif count2 > len(word)/2:
	print word.lower()
else:
	print word.lower()