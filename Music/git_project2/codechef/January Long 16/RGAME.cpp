/* samala's code*/
#include<list>
#include<cmath>
#include<vector>
#include<iostream>
using namespace std;
 
typedef long long ll;
ll mod = 1000000007;
 
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long N,i;
		cin>>N;
		vector<ll> V(N+1,0),A(N+1),summ2(N+1,0);
 
		ll exp2=1;
		cin>>A[0];
		summ2[0] = A[0];
		for(i=1;i<=N;++i)
		{
			cin>>A[i];
 
			summ2[i] = summ2[i-1] + (exp2*A[i])%mod;
			summ2[i] %= mod;
			exp2 = (exp2*2)%mod;
 
			V[i] = V[i-1]*2 + summ2[i-1]*A[i];
			V[i] %= mod;
		}
		cout<<(V[N]*2)%mod<<endl;
	}
	return 0;
}


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	long int N,i;
	long long int a[100001];
	cin>>T;
	while(T--)
	{
		long long int product = 1;
		cin>>N;
		
		for(i=0;i<N+1;i++)
		{
			cin>>a[i];
			product *= a[i];
		}
		cout<< 2*product;
	}	
return 0;
}*/
