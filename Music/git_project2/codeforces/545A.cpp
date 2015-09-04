#include<bits/stdc++.h>
using namespace std;
int main()
{
	int flag=1,count=0,a[100][100],b[101]={0};
	int n,i,j;
	cin>>n;
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cin>>a[i][j];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==1||a[i][j]==3)
			flag=0;
		}
		if(flag)
		{
			count++;
			b[i+1] = 1;
		}
		flag = 1;
	}
	cout<<count<<endl;
	for(i=0;i<101;i++)
	{
		if(b[i]==1)
		cout<<i<<" ";
	}
	
	
	
	
	
	return 0;
	
}
