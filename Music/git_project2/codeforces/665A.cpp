#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,ta,b,tb,h,minute,count=0;
	char c;
	cin>>a>>ta>>b>>tb;
	cin>>h>>c>>minute;
	int x1 = 60*h + minute;
	int y1 = x1+ta;
	for(int x2 = 5*60 + 0;x2<24*60;x2 += b)
	{
		int y2 = x2 + tb;
		int x = max(x1,x2),y = min(y1,y2);
		if(x<y)
		count++;
	}
	cout<<count<<endl;
	return 0;
}
