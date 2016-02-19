#include<iostream>
#include<cmath>
using namespace std;
int a[1001];
void sieve(int n)
{
}
int main()
{
	int count=0;
	for (int i=2;i<=1000;i++)
	{ if(a[i]==0)
	{for(int j=i*2;j<=1000;j=j+i)
	{a[j]=1;
	}
	}
	}
	for (int i=2;i<=1000;i++)
	{if (a[i]==0)
	{
	cout<<i<<endl;
	count++;
}
	}
	cout<<count<<endl;
	return 0;
}
