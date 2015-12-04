#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,j,i,count=0;
	long int a[100000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		count+=a[i];
	}
	if(count%n==0)
	count = n;
	else
	count = n-1;
	cout<<count<<endl;
	return 0;
}
