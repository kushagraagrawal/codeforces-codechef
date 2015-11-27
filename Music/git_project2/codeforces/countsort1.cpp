#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,a[10],b[10] = {0},out[10];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]]++;
	}
	for(i=1;i<10;i++)
	{
		b[i] += b[i-1];
	}
	
	for(i=0;i<n;i++)
	{
		out[b[a[i]] - 1] = a[i];
		b[a[i]]--;
	}
	for(i=0;i<10;i++)
	{
		a[i] = out[i];
	}
	for(i=0;i<n;i++)
	cout<<a[i];
	return 0;
	
}
