#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		LL N,i;
		cin>>N;
		LL sum=0;
		for(i=1;i<=sqrt(N);i++){
			if(N%i==0){
				LL temp = N/i;
				if(N!=i*i){
					sum+=i + temp;
				}
				else
					sum+=i;
			}
		}
		cout<<sum<<endl;
	}
return 0;
}
