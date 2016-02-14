#include<bits/stdc++.h>
using namespace std;
long long int M = 1000000007;
int main()
{
	long long int T;
	long long int temp,A,B,N,dp[8];
	cin>>T;
	while(T--)
	{
		cin>>A>>B>>N;
		dp[1] = (A + (2*M))%M;
		dp[2] = (B + (2*M))%M;
		dp[3] = (B-A + (2*M))%M;
		dp[4] = (-A + (2*M))%M;
		dp[5] = (-B + (2*M))%M;
		dp[0] = (A-B + (2*M))%M;
		temp = N%6;
		cout<<dp[temp]<<endl;
		
	}
	
}
