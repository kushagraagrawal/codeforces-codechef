#include<bits/stdc++.h>
#define ULL unsigned long long int
using namespace std;
int main()
{
	ULL i,T,K,temp,temp2,count=0,c=0;
	cin>>T;
	while(T--){
		cin>>K;
		K--;
		count=0;
		c=0;
		temp2 = K;
		while(K>0){
			temp = K%5;
			K/=5;
			c += temp*(ULL)pow(10,count);
			count++;
		}
		//cout<<c<<endl;
		
		//cout<<count<<endl;
		//c--;
		cout<<c*2<<endl;
	}
return 0;
}
