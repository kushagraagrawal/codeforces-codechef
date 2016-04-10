#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll gcd(ll a,ll b)
{
	if(b!=0)
	return gcd(b,a%b);
	else
	return a;
}
int main()
{
	int n;
	cin>>n;
	vector <ll> a(n),ans;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		ans.push_back(a[i]);
		if(i+1<n&&gcd(a[i],a[i+1])>1)
		ans.push_back(1);
	
	
	}
	cout<<ans.size() - n<<endl;
	for(int j=0;j<ans.size();j++)
	{
		cout<<ans[j]<<" ";
	}
return 0;
}
