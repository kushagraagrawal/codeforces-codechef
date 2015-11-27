#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int d1,d2,d3,distance = 0;
	cin>>d1>>d2>>d3;
	if(d1<=d2)
	{
		distance+=d1;
		if(d1+d2<d3)
		distance+=d1+d2;
		else
		distance+=d3;
		distance+=d2;
	}
	else
	{
		distance+=d2;
		if(d1+d2 < d3)
		distance += d1 + d2;
		else
		distance += d3;
		distance += d1;
	}
	cout<<distance<<endl;
}	
