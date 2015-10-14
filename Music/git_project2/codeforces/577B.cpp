#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a[100000],m,i,n,sum=0,flag=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	sum+=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(sum%m==0)
	{
		cout<<"YES"<<endl;
			flag=1;
			break;
	}
		else
		sum -= a[i];
	}
	if (flag==0)
	cout<<"NO"<<endl;
	return 0;
}
