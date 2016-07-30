#include<bits/stdc++.h>
#define LL long long int
using namespace std;
LL dp[100009];
LL n;
void DP(LL a[]){
	dp[1] = 1;
	for(int i=2;i<=n;i++){
		if(a[i]>a[i-1])
			dp[i] = dp[i-1] + 1;
		else
			dp[i] = 1;
			
	}
	
}
int main(){
	
	cin>>n;
	LL a[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	//LL ans = 0,temp=1;
	DP(a);
	sort(dp+1,dp + n+1);
	cout<<dp[n];
	return 0;
}
