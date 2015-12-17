#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,sum=0;
	cin>>n;
	long long int a[n],i;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort (a,a+n);
	for(i=0;i<n;i++)
	{
		//cout<<a[i]<<endl;
		sum+=abs(i+1 - a[i]);
		//cout<<sum<<endl;
	}
	cout<<sum<<endl;
	return 0;
}


