#include<bits/stdc++.h>

#define LL long long int

using namespace std;
LL sum(LL i){
	LL temp = i,n,sum1=0,sum2=0;
	while(temp>0){
		n = temp%10;
		temp/=10;
		sum1+=n;
	}
	temp = sum1;
	while(temp>0){
		n = temp%10;
		temp/=10;
		sum2+=n;
	}
return sum1+sum2;
}
int main(){
	int N,Q,i;
	cin>>N;
	LL count =0;
	if(N<100){
		for(i=1;i<N;i++){
			if(i + sum(i)==N)
				count++;
		}
	}
	else{
		for(i=N-100;i<N;i++){
			if(i+sum(i)==N)
				count++;
		}
	}
	cout<<count;
	return 0;
}
