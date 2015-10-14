#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,temp1,temp2;
	int a[51] = {0},b[2501] = {0},c[51] = {0};
	cin>>n;
	for (i=0;i<n*n;i++)
	{
		cin>>temp1>>temp2;
		if(a[temp1]==0 && c[temp2]==0)
		{
			a[temp1] = 1;
			c[temp2] = 1;
			b[i+1] = 1;
			
		}
	}
for(i=0;i<2501;i++)
{
	if(b[i]==1)
	cout<<i<<" ";
}
return 0;
}
