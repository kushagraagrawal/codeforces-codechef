#include<bits/stdc++.h>
#define LL long long int 
using namespace std;
int main()
{
	LL temp,h1,h2,a,b;
	cin>>h1>>h2>>a>>b;
	temp = a*8;
	if(a<=b)
	{
		if(temp + h1>=h2)
		cout<<"0";
		else
		cout<<"-1";
	}
	else if(temp + h1 >= h2)
	cout<<"0";
	else
	{
		LL count = 0;
		//cout<<"test";
		temp = (a*8) - b*12;
		h1 += temp;
		while(1)
		{
			count++;
			h1 += a*12;
			if(h1 >= h2)
			break;
			else
			{
				h1 -= b*12;
			}
		}
		cout<<count;//cout<<(h2-h1)/((a-b)*12);
	}
	return 0;
}
