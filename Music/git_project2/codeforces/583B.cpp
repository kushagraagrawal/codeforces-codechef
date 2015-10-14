/*#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int i,n;
	int a[1000],/*b[1001] = {0}count=0,temp=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	//b[a[i]]++;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			temp++;
			for (int k=0;k<i;k++)
			{
				if (a[k]==temp)
				{
					temp++;
					count++;
				}
			}
		}
		else if (a[i]<=temp)
		{
			temp++;
			for(int j=0;j<i;j++)
		{
			if (a[j]==temp)
				{
					temp++;
					count++;
				}
		}
		}	
		//else if()
	
	}
	if (temp<n)
	{
		count++;
		
	}
cout<<count<<endl;
return 0;

}*/
#include<iostream>
using namespace std;
int main()
{
	int n,i,pieces=0,dir=0,k,tmp,r=1;
	cin>>n;
	int arr[n],lim=n;
	for(i=0;i<n;++i)
		cin>>arr[i];
	i = -1;
	while(lim--)
	{
		if(i == -1)
		for(i=0;i<n;++i)
		{
			if(arr[i] != -1 && arr[i] <= pieces)
			{
				pieces++;
				arr[i] = -1;
			}
		}
		if(pieces == n)
			break;
		dir++;
 
		if(i == n)
		for(i=n-1;i>=0;--i)
		{
			if(arr[i] != -1 && arr[i] <= pieces)
			{
				pieces++;
				arr[i] = -1;
			}
		}
		if(pieces == n)
			break;
		dir++;
	}
	cout<<dir;
	return 0;
}
