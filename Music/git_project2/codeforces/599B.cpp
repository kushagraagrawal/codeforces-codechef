#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int flag1=1,flag2=1,i,n,m,a[100000],b[100000],c[100001] = {0},d[100001]= {0};
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	c[a[i]]++;
	}

	for(i=0;i<m;i++)
	{
	cin>>b[i];
	d[b[i]]++;
	}
	if(n!=m)
	cout<<"Impossible";
	else
	{
	
	for(i=1;i<100001;i++)
	{
		if (c[i]==d[i])
		{
			if(c[i]>1)
			{cout<<"Ambiguity";
			
			flag1=0;
			break;}
			
		}		
		else
		{
			cout<<"Impossible";
			flag1=0;
			break;
		}
	}
	if(flag1==1)
	{
	cout<<"Possible"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
}
return 0;


}
