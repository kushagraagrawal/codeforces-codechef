#include<bits/stdc++.h>
#define LL long long int
using namespace std;
 
int main(){
	int T;
	cin>>T;
	LL i;
	LL N;
	while(T--){
		cin>>N;
		int a[N];
		bool flag = true;
		bool fl = false;
		double sum=0;
		for(i=0;i<N;i++){
			cin>>a[i];
		}
		for(i=0;i<N && flag;i++){
			if(a[i]==2)
				flag = false;
			else if(a[i]==5)
				fl = true;
			sum+=a[i];
		}
		flag = flag & fl;
		if(sum/N<4.0)
			flag = false;
		if(flag)
			cout<<"Yes\n";
		else
			cout<<"No\n";
		
	}
return 0;
} 
