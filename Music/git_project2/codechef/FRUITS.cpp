#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,N,M,K,temp;
	cin>>T;
	while(T--){
		cin>>N>>M>>K;
		if (N==M){
			cout<<"0"<<endl;
			continue;
		}
		else if(N<M)
		{
			temp = M - N;
			temp -= K;
			if(temp > 0)
			cout<<temp<<endl;
			else
			cout<<"0"<<endl;
		}
		else if(N>M)
		{
			temp = N - M;
			temp -= K;
			if(temp > 0)
			cout<<temp<<endl;
			else
			cout<<"0"<<endl;
		}
		
	}
return 0;
}
