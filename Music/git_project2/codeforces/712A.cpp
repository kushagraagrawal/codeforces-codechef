#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll i,n;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	vector<ll>b(n);
	for(i=0;i<n;i++)
	{	
		if(i!=n-1)
		b[i] = a[i] + a[i+1];
		else{
			b[i] = a[i];
		}
	}
	for(i=0;i<n;i++)
		cout<<b[i]<<" ";
	return 0;
}
