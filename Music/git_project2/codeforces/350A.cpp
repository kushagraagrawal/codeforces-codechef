#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,m,a[100],b[100],temp1,temp2,temp3,temp4;
	cin>>n>>m;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	temp1 = *max_element(a,a+n);
	temp2 = *min_element(a,a+n);
	for(i=0;i<m;i++)
	cin>>b[i];
	temp3 = *min_element(b,b+m);
	if (max(2 * temp2,temp1) < temp3)
	cout<<max(2*temp2,temp1);
	else
	cout<<"-1";
	return 0;
}
