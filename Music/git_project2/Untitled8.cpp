#include<iostream>
#include<cmath>
using namespace std;
int a[101];
void sieve(int n)
{
}
int main()
{
	int count=0;
	for (int i=2;i<=100;i++)
	{ if(a[i]==0)
	{for(int j=i*2;j<=100;j=j+i)
	{a[j]=1;
	}
	}
	}
	for (int i=2;i<=100;i++)
	{if (a[i]==0)
	cout<<i<<endl;
	}
	return 0;
}
