#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
typedef long long ll;
typedef pair<int,int> PII;
typedef pair<ll,ll> Pll;
typedef vector<int> VI;
typedef vector<ll> VL;
const ll MOD = 1000000007;
const double PI = acos(-1.);
const double eps = 1e-9;

inline void solve(){
	ll n;
	cin>>n;
	vector<ll>a(n);
	ll sum=0;
	for (int i = 0; i < n; ++i)
		cin>>a[i],sum+=a[i];

	sort(a.begin(), a.end());
	set<ll>s(a.begin(), a.end());
	if(s.size()>3)
	{
		cout<<"NO";
		return;
	}
	else if(s.size()<=2)
	{
		cout<<"YES";
		return;
	}

	

	ll x=0,x2=0;
	int flag=0;
	for (int i = 0; i < n-1; ++i)
	{
		x2=a[i+1]-a[i];
		if(x2!=0)
		{
			if(flag==0)
				x=x2,flag=1;
			else if(x!=x2)
			{
				cout<<"NO";
				return;
			}
		}
	}
	cout<<"YES";

}

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	solve();
	
	return 0;
}
