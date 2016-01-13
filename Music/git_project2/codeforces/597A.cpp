#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int k,a,b,count=0;
	cin>>k>>a>>b;
	if(a<=0 && b<=0)
	{
		a = a + b;
		b = a - b;
		a = a - b;
		a = -a;
		b = -b;
	}
	if(a<=0&&b>=0)
	{
		a= -a;
		count = a/k + b/k;
		count++;
	}
	else
	{
		a=a-1;
		count = b/k - (a/k);
	}

	cout<<count<<endl;
	return 0;
}
