#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n,i;
	cin>>n;
	ll a=0,b=0,c=0,x;
	for(i=0;i<n;i++){
		cin>>x;
		a+=x;
	}
	for(i=0;i<n-1;i++){
		cin>>x;
		b+=x;
	}
	for(i=0;i<n-2;i++){
		cin>>x;
		c+=x;
	}
	cout<<a-b<<endl;
	cout<<b-c<<endl;
	return 0;
}
