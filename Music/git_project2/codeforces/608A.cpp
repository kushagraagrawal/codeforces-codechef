#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t,f,s,N,M;
	int a[100010];
	cin>>N>>M;
	memset(a,0,sizeof(a));
	for(i=0;i<N;i++)
	{
		cin>>f>>t;
		a[f] = max(a[f],t);
		//cout<<a[f]<<endl;
	}	
	int ans = 0;
	for(i=M;i>=0;i--)
	{
		ans = max(a[i],ans);
		ans++;
		//cout<<ans<<endl;
	}
	ans--;
	cout<<ans<<endl;
	return 0;
}
