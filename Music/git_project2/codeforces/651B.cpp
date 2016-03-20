#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count,count1,a[1008]={0},flag,temp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		a[temp]++;
	}
	count=n;count1=0;
	while(count>0)
	{
		flag=0;
		for(i=0;i<1005;i++)
		{
			if(a[i]>0 && flag == 1)
			{
				count1++;
				a[i]--;
				count--;
			}
			else if(a[i]>0)
			{
				a[i]--;
				count--;
				flag = 1;
			}
		}
	}
	cout<<count1<<endl;
	return 0;
}
