#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	int t;
	cin>>t;
	ll n,i;
	while(t--){
		bool flag = true;
		cin>>n;
		vector<ll>a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(),a.end());
		for(i=0;i<n-1;i++){
			if(abs(a[i] - a[i+1]) > 1)
				flag = false;
		}
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
