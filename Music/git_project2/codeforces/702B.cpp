#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n,i,j;
	ll count = 0;
	
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			ll x = a[i]+a[j];
			if(!(x == 0) && !(x & (x - 1)))
				count++;
		}
	}
	cout<<count;
	return 0;
}
