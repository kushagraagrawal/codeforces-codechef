#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main(){
	LL i,N,Q,t;
	cin>>N>>Q;
	vector<LL>a(N);
	for(i=0;i<N;i++)
	cin>>a[i];
	sort(a.begin(),a.end());
	while(Q--)
	{
		cin>>t;
		if(t>=a[0] && t<=a[N-1])
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
return 0;
} 
