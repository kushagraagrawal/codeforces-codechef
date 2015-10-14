#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100001] = {0},count=0;
	int i,j,k,l,m,n;
	long int d;
	cin>>k>>l>>m>>n>>d;
    if(a[k]==0)
	for(j=k*2;j<=d;j=j+k)
	a[j]=1;
	
	
	
	a[k] = 1;
	if(a[l]==0)
	for(j=l*2;j<=d;j=j+l)
	a[j]=1;
	
		a[l]=1;
	
	if(a[m]==0)
	for(j=m*2;j<=d;j=j+m)
	a[j]=1;
	
	
	a[m]=1;
	
	 if(a[n]==0)
	for(j=n*2;j<=d;j=j+n)
	a[j]=1;
	
	
	a[n]=1;
	for(i=0;i<=d;i++)
	{
		if (a[i]==1)
		count++;
		//cout<<a[i]<<" ";
	}
	
	cout<<count<<endl;


return 0;
}
