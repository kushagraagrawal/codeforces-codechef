#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,j,i,a[100],b[101] = {0};
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>a[i];
		for (j=a[i];j<=n;j++)
		{
			if(b[j]==0)
			b[j] = a[i];
		}
	}
	for(i=1;i<=n;i++)
	{
		cout<<b[i]<<" ";
	}
return 0;
}
