#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll s,v;
	int t;
	cin>>t;
	while(t--){
		cin>>s>>v;
		cout.precision(8);
		cout<<fixed;
		cout<< (double)2*s/(double)(3*v)<<endl;
	}
return 0;
}
