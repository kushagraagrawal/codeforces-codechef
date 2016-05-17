#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main()
{
	LL i,n,k,ans;
	cin>>n>>k;
	vector<LL>a(n+1);
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		
	}
	a[0] = a[n];
	for(i=1;k-i>0;i++){
		k-=i;
	}
	cout<<a[k]<<endl;
	return 0;
}
