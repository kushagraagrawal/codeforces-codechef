#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int a[3],b[3],l=0,m=0;
	cin>>a[0]>>a[1]>>a[2];
	cin>>b[0]>>b[1]>>b[2];
	for (int i=0;i<3;i++)
	{
		if (a[i]<b[i])
		l += b[i] - a[i];
		else
		m += (a[i] - b[i])/2;
	}
	if (m < l)
	cout<<"No";
	else
	cout<<"Yes";

return 0;

}
