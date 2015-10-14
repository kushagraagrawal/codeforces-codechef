#include<bits/stdc++.h>
using namespace std;
int main()
{
	int flag=0,i,n,p,q,temp,a[101] = {0};
	cin>>n;
	cin>>p;
	for (i=0;i<p;i++)
	{
		cin>>temp;
		a[temp]++;
	}
	cin>>q;
	for(i=0;i<q;i++)
	{
		cin>>temp;
		a[temp]++;
	}	
	for(i=1;i<=n;i++)
	{
		//cout<<a[i]<<" ";
		if(a[i]==0)
		{
			cout<<"Oh, my keyboard!";
			flag = 1;
			break;
		}
	}
if (flag == 0)
cout<<"I become the guy.";
return 0;

}
