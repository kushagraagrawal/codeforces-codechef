#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll l,r;
	cin>>l>>r;
	if (l%2==0 && (r - l) >= 2)
	cout<<l<<" "<<l+1<<" "<<l+2;
	else if(l%2==1 && (r-l)>=3)
	cout<<l+1<<" "<<l+2<<" "<<l+3;
	else
	cout<<"-1"<<endl;
	return 0;
}
