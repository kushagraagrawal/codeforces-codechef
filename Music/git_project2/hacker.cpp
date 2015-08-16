#include<iostream>
#include<cmath>
using namespace std;
int isprime(int);
int digit_sum(int);
int primesum(int);
int main()
{
	int T,count,A,B;
	cin>>T;
	while(T--)
	{	count=0;
		cin>>A>>B;
		for(int i=A;i<=B;i++)
		{	int c,d;
			c=digit_sum(i);
			d=primesum(i);
			if(c==d)
			{
			count++;
		}
		
		}
		cout<<count<<"\n";
		
		
	}
	
	return 0;
	
}

int digit_sum(int i)
{	int c=0;
	int sum=0;
	while(i)
	{
		c=i%10;
		i=i/10;
		sum+=c;
	}
	
	return sum;
}

int primesum(int i)
{ int c,sum=0;
	if (isprime(i))
	return i;
	else 
	{
	for(int j=1;j<=sqrt(i);j++)
	{
		if((i%j)==0)
		{
			c=i/j;
			if(j!=1&&c!=1&&isprime(c)&&isprime(j))
				sum = sum + digit_sum(j) + digit_sum(c);
			
		}
	}
	return sum;
}
}
int isprime(int j)
{	int count=0;
	if(j==1)
	return 0;
	else
	for(int i=1;i<=sqrt(j);i++)
	{
		if(j%i==0)
		count++;
	}
if(count==1)
return 1;
else
return 0;
	
	
}
