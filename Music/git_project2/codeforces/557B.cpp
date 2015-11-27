#include<bits/stdc++.h>
using namespace std;
int main()
{
	double w,a[200000];
	long long int i,n;
	cin>>n>>w;
	for(i=0;i<2*n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+(2*n));
	cout<<min(w,min(3*a[0]*n,a[n]*1.5*n));
	return 0;
}
