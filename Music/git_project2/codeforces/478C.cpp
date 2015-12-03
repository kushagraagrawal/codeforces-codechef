#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int temp,a[3];
	for (temp=0;temp<3;temp++)
	cin>>a[temp];
	sort(a,a+3);
	if (a[0] + a[1] <=a[2]/2)
	{
		cout<<a[0] + a[1];
	}
	else
	{
		cout<<( a[0] + a[1] + a[2] )/ 3;
	}
	return 0;
}
