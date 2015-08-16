#include<bits/stdc++.h>
using namespace std;
long long int c,a,b,sum1=0,sum2=0;
int main()
{
	cin>>a;
	b=a;
	while(b)
	{	c=b%10;
		b=b/10;
		sum1+=c;
	}
	
	for(int i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			a=a/i;
			int f=i;
			if(f==2)
			sum2+=f;
			else
			{
				for(int d=2;d<=sqrt(f);d++)
			{
				if(f%d==0)
				{
					int e=f/d;
					sum2+=d+e;
				}
			
			}
		}
		}
		
	}
	
	
	
	if(sum1==sum2)
	cout<<1;
	else
	cout<<0;
	return 0;
}
