#include<iostream>
using namespace std;
int main()
{
	int m,n,x,y,i;
	cin>>n>>m;
	if(n < m)
	{
		x = 0;
		y = m;
	}
	else
	{
		x = m;
		y = 0;
	}
	cout<<min(m,n)+1<<endl;
	for(i=0;i<=min(n,m);++i)
	{
		cout<<x<<" "<<y<<endl;
		if(n < m)
		{
			x++;
			y--;
		}
		else
		{
			x--;
			y++;
		}
	}
	return 0;
}
