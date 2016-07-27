#include<bits/stdc++.h>
using namespace std;
int main(){
	int T,N,M;
	cin>>T;
	while(T--){
		cin>>N>>M;
		cout<<N*(M-1) + (N-1)*M<<endl;
	}
return 0;
}
