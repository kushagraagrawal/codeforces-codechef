#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	long long int sum1 = 0,sum2 = 0,i,j,a[1000] , b [1001 ] = {0} , c[1001] = {0} ,N;
	cin>> N;
	for (i=0;i<N;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		b[a[i]]++;
		else
		c[a[i]]++;
	}
	for(i=0;i<1001;i++)
	{
		sum1 += (b[i] * i);
		sum2 += (c[i] * i);
	}
	for (i=0;i<1001;i++)
	{
		if (b[i]!=0)
		{
			for(j=0;j<b[i];j++)
			cout<<i<<" ";
		}
	}
	cout<<sum1<<" ";
	for (i=0;i<1001;i++)
	{
		if (c[i]!=0)
		{
			for(j=0;j<c[i];j++)
			cout<<i<<" ";
		}
	}
	cout<<sum2<<" ";
	return 0;
}
