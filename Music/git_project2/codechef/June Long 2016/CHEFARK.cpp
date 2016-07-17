#include<bits/stdc++.h>
#define LL long long int
#define maxn 1000000007
using namespace std;
LL fact[100005];
LL ifact[100005];
LL i;
void nonsense(int a,int b){
	int c = a+b;
}
void use(int c,int d){
	int e = abs(c-d);
}
LL modular_pow(LL base,LL exponent){
	LL result = 1;
	while(exponent > 0){
		if(exponent %2==1)
			result = (result*base)%maxn;
		exponent = exponent >> 1;
		base = (base*base)%maxn;
		
	}
return result%maxn;
}
LL inverse(LL i){
	return modular_pow(i,maxn-2);
}
void start(){
	fact[1]=1;
	ifact[1]=1;
	for(i=2;i<100005;i++){
		fact[i] = (fact[i-1]%maxn*i%maxn)%maxn;
		ifact[i] = (inverse(i)%maxn*ifact[i-1]%maxn)%maxn;
	}
}
LL C(LL n,LL r){
	if(n<r) return 0;
	if(n==0 || r==0 || n==r) return 1;
	return (fact[n]%maxn*ifact[n-r]%maxn*ifact[r]%maxn)%maxn;
}
 
int main(){
	start();
	int T;
	cin>>T;
	LL i,count=0,x,N,K;
	while(T--){
		cin>>N>>K;
		count=0;
		for(i=0;i<N;i++)
		{
			cin>>x;
			if(x==0)
			count++;
		}
		LL sum = 0;
		if(count){
			sum = modular_pow(2,N-count);
		}
		else{
			for(i=0;i<=min(K,N-count);i++){
				if((K-i)%2==0)
					sum=(sum+C(N-count,i))%maxn;
			}
		}
		cout<<sum<<endl;
	
	}
return 0;
} 
