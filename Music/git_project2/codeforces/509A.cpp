#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int a[10][10],i=0,j;
	cin>>n;	
	for(j=0;j<n;j++)
	{
		a[i][j]=1;
	}
	j=0;
	for(i=0;i<n;i++)
	{
		a[i][j] = 1;
	}
	for (i=1;i<n;i++)
	{
		for(j=1;i<n;j++)
		{
			a[i][j] = a[i-1][j] + a[i][j-1];
		}
	}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	cout<<a[i][j]<<" ";
	cout<<"\n";
	
}

return 0;
}
