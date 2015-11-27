d1,d2,d3 = map(int,raw_input().split())
temp1 = d1+d2+d3
temp2 = 2 * (d1 + d2)
temp3 = 2 * (d1 + d3)
temp4 = 2 * (d2 + d3)
print min(temp1,temp2,temp3,temp4)