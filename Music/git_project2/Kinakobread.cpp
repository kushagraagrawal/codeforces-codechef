#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int M,N,count1=0,count2=0;
	cin>>N>>M;
	int a[2][M],b[N],c[100000],i,j,l;
	for(l=0;l<N;l++)
	cin>>b[l];
	for(i=0;i<M;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>a[j][i];
		}
	}
	for(i=0;i<N;i++)
	{	
		int c[100000]={0};
		c[b[i]-1]++;
		for(l=i+1;l<N;l++)
		{
			c[b[l]-1]++;
		for(j=0;j<M;j++)
		{
			if(c[j]>=a[0][j]&&c[j]<=a[1][j])
			count1++;
		}
		if(count1==M)
		{	
		count2++;
		count1=0;
		break;
		}
	}
	}
	cout<<count2;
	return 0;
}

