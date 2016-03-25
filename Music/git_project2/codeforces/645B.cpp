#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main()
{
	long long int n,k,temp,temp2;
	cin>>n>>k;
	
	if (n==1)
	{
		cout<<"0";
	}
	else
	{
		temp = n/2;
		if (k> temp)
		{
			cout<<(n*(n-1))/2;
		}
		else
		{
			temp2 = max(n-2*k,0LL);
			cout<<(n*(n-1))/2 - (temp2*(temp2-1))/2;
		}
	}
	return 0;
}
