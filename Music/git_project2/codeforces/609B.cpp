#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,i,temp;
	cin>>n;
	int m,j;
	cin>>m;
	long int a[11] = {0};
	for(i = 0;i<n;i++)
	{
		cin>>temp;
		a[temp]++;
	}
	long int count = 0,count1=0;
	for (i=1;i<=m - 1;i++)
	{	count1 = 0;
		for(j = i+1;j<=m;j++)
		{
			count1 += a[j];
		}
		count1 *= a[i];
		count += count1;
	}
	cout<<count<<endl;
	return 0;
}
