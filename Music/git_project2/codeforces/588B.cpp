#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,n,ans = 1;
	cin>>n;
	for(i = 2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			ans*=i;
			while(n%i==0)
			{
				n/=i;
			}
		}
	}
	if(n>1)
	ans*=n;
	cout<<ans<<endl;
	return 0;

}
