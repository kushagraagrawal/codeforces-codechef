#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int j,sum=0,A,B;
	char c[100001];
	long long int a[100000];
	cin>>A>>B;
	cin>>c;
	for(j=0;j<strlen(c);j++)
	{
		a[j] = c[j];
	}
	if(a[0]=='1')
	{
	a[0] = A;
	sum = A;
}
else
a[0] = A;
	for(long int i=1;i<strlen(c);i++)
	{
		if(a[i]=='1')
		{
			sum += a[i-1]*a[i-1];
			a[i] = a[i-1]*a[i-1];
			//cout<<a[i]<<endl;
		}
		else
		{
		a[i] = a[i-1]*a[i-1];
		//cout<<a[i]<<endl;
	}
	}
	cout<<sum%B<<endl;
	return 0;
}
