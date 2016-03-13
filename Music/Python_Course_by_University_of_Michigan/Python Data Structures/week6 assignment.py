'''Write a program to read through the mbox-short.txt and figure out the distribution by hour of the day for each of the messages. You can pull the hour out from the 'From ' line by finding the time and then splitting the string a second time using a colon.
From stephen.marquard@uct.ac.za Sat Jan  5 09:14:16 2008
Once you have accumulated the counts for each hour, print out the counts, sorted by hour as shown below.'''
name = raw_input("Enter file:")
if len(name) < 1 : name = "mbox-short.txt"
handle = open(name)
tmp = dict()
temp2 = list()
for line in handle:
    line = line.rstrip()
    line2 = line.split()
    for word in line2:
        if word == 'From':
            temp = line.find(':')
            str1 = line[temp-2:temp]
            tmp[str1] = tmp.get(str1,0) + 1
for k,v in tmp.items():
    temp2.append((k,v))
temp2.sort()
for x in temp2:
    print x[0],x[1]