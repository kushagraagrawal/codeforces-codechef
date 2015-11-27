#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,y,x1,y1,x2,y2;
	cin>>x>>y;
	if (x>0 && y>0)
	{
		x1 = 0;
		y1 = x + y;
		x2 = x + y;
		y2 = 0;
	}
	else if (x<0 && y>0)
	{
		x1 = x - y;
		y1 = 0;
		x2 = 0;
		y2 = y - x;
	}
	else if(x<0 && y<0)
	{
		x1 = x + y;
		y1 = 0;
		x2 = 0;
		y2 = x+y;
	}
	else if(x > 0&&y<0)
	{
		x1 = 0;
		y1 = y - x;
		x2 = x - y;
		y2 = 0;
	}
	cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
	return 0;
}
