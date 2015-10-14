#include<bits/stdc++.h>
using namespace std;
int isPrime(long long int);
int main()
{
	long long int temp,i,c,n,x,count=0;
	cin>>n>>x;
	
	if (x==1)
	cout<<"1"<<endl;
	else if(isPrime(x)&&x>n)
	cout<<"0"<<endl;
	else if(x<=n*n)
	{
		if(isPrime(x)&&x<=n)
		cout<<"2"<<endl;
		else
		{
		for(i=1;i<=n;i++)
		{
			if (x%i==0&&x<=i*n)
			count++;
		
		}
		cout<<count<<endl;
		}/*for(i=2;i<=sqrt(x);i++)
	
		{
			if(x%i==0)
			{
				c = x/i;
				count++;
				if(c!=i)
				count++;
			}
		}
		cout<<count<<endl;
	}*/}
	else
	cout<<"0"<<endl;
return 0;
}
int isPrime(long long int x)
{
	long long int i,count=1;
	for (i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		count++;
	}
	if(count==1)
	return 1;
	else
	return 0;
	
	}
