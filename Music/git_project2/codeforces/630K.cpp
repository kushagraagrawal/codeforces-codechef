#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int N,ans=0;
	long long int a[] = {2,3,5,7},i,j,k,l;
	cin>>N;
	for(i=0;i<4;i++)
	{
		ans += N/a[i];
		for(j=i+1;j<4;j++)
		{
			ans -= N/(a[i]*a[j]);
			for(k=j+1;k<4;k++)
			{
				ans+= N/(a[i]*a[j]*a[k]);
				for(l=k+1;l<4;l++)
				{
					ans-=N/(a[i]*a[j]*a[k]*a[l]);
				}
			}
		}
	}
	cout<<N-ans;
return 0;

}
