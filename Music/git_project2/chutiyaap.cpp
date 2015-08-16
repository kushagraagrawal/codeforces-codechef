#include<iostream>
#include<cmath>
using namespace std;
long long int a[1000000];

int main()
{
	int c,d,e;
	cin>>e;
	for (int i=2;i<=1000000;i++)
	{ if(a[i]==0)
	{for(int j=i*2;j<=1000000;j=j+i)
	{a[j]=1;
	}
	}
	}
	while(e--)
	{
	cin>>c>>d;
	
	for (int i=c;i<=d;i++)
	{if (a[i]==0)
	cout<<i<<endl;
	}}
	return 0;
}
