#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long int i,a[1000],b[1000],temp3,temp1,temp2;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	temp1 = a[n-1] - a[0];
	temp2 = b[n-1] - b[0];
	temp3 = max(temp1,temp2);
	cout<<temp3*temp3;
	return 0;
}
