#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main(){
	LL n,x,sum=0;
	cin>>n;
	for(LL i=0;i<n;i++){
		cin>>x;
		sum += x-1;
		if(sum&1)
			cout<<"1"<<endl;
		else 
			cout<<"2"<<endl;
	}
return 0;
}
