#include<iostream>
#include<cmath>
long int divsum(long int);
using namespace std;

int main()
{
	long int a;
	cin>>a;
	long int ca;
	while(a--)
	{
		cin>>ca;
	
		cout<<divsum(ca)<<endl;
	}
	
return 0;	
}

long int divsum(long int a)
{
long int b=1,c;
for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{c=a/i;
		b+=i;
		if(c!=i)
		b+=c;
		
		}
		else if(a==1)
			b=0;
		}	
	
	return b;
	
}
