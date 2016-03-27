#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main()
{
	int T;
	LL N,K,i;
	
	cin>>T;
	while(T--)
	{
		cin>>N>>K;
		LL sum = 0;
		LL a[N];
		LL temp = N - (2*K);
		for(i=0;i<N;i++)
		{
			cin>>a[i];
			
		}
		sort(a,a + N);
		//double sum = 0;
		for(i=K;i<N-K;i++)
		sum+=a[i];
		cout<<fixed;
		cout<<setprecision(7);
		cout<<(float)sum/(float)temp<<endl;
		//cout<<setprecision(5)<<(float)sum/temp<<endl;
	}
return 0;
}
