#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,m,a[100],sum=0,count=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	if(a[i]<0)
	count++;
	}
	sort(a,a+n);
	
	for(i=0;i<min(m,count);i++)
	{
		if(a[i]<0)
		sum+= abs(a[i]);
		else
		sum-= a[i];
		//cout<<sum<<endl;
	}
	cout<<sum<<endl;
	return 0;
}
