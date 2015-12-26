#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int temp,n,i;
	long long int ans=0;
	vector< pair<long int,long int> >v;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(make_pair(temp,i));
	}
	sort(v.begin(),v.end());
	for(i=1;i<n;i++)
	{
		ans += abs(v[i].second - v[i-1].second);
	}
	cout<<ans<<endl;
	return 0;
}
