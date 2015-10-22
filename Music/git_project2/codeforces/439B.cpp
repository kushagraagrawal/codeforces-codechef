#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int count=0,i,n,x,a[100000];
	cin>>n>>x;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for (i=0;i<n;i++)
	{
		/*cout<<a[i]<<" ";
		cout<<x*a[i]<<" ";*/
		count += x*a[i];
		if(x>1)
		x--;
	}
	cout<<count<<endl;
	return 0;

}
