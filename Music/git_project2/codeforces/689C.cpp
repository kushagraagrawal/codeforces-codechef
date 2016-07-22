#include<bits/stdc++.h>
#define LL long long int
using namespace std;
const int N = 2e5 + 10;
const LL inf = 1e18;
LL m,dp[10*N];
void init(){
	for(int i=2;i<=1000006;i++){
		LL temp = i;
		dp[i] = temp*temp*temp;
	}
}
int check(LL x){
	LL num = 0;
	for(int i=2;i<1000006;i++){
		if(dp[i]<=x){
			num += x/dp[i];
		}
	}
	if(num>m) return 1;
	else if(num==m) return 2;
	return 0;
}
int main(){
	init();
	cin>>m;
	LL l=1,r = inf;
	while(l<=r){
		LL mid = (l+r)>>1;
		if(!check(mid))l = mid + 1;
		else r = mid-1;
	}
	if(check(l)==2) cout<<l<<endl;
	else cout<<"-1"<<endl;
	return 0;
}
