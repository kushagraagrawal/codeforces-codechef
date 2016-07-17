#include<bits/stdc++.h>
#define ULL unsigned long long int
#define LL long long int
#define maxn 786433
using namespace std;
ULL horner(LL poly[],LL n,LL x){
	ULL i,result = poly[0];
	for(i=1;i<n;i++)
		result = ((result*x)%maxn+ poly[i]%maxn)%maxn;
	return result;
}
int main(){
	LL i,N,Q,x;
	cin>>N;
	LL poly[N+1];
	for(i=0;i<=N;i++)
		cin>>poly[N-i];
	cin>>Q;
	while(Q--){
		cin>>x;
		cout<<horner(poly,N+1,x)%maxn<<endl;
	}
return 0;
} 
