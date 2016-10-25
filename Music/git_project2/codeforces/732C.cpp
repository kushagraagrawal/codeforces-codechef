#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll a[3],sum=0;
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	if(a[0]==a[1] && a[1]==a[2])
		cout<<0;
	else{
		if(a[0]!=a[2])
			sum=(a[2] - a[0] - 1);
		if(a[1]!=a[2])
			sum+=(a[2] - a[1] - 1);
			cout<<sum;
	}
return 0;
}
