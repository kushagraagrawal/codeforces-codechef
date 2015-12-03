#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	int M,K,N;
	int i,a[100],b[100];
	cin>>T;
	while(T--)
	{
		int c[101] = {0},d[101] = {0},sum1=0,sum2=0;
		cin>>N>>M>>K;
		for(i=0;i<M;i++)
		{
			cin>>a[i];
			c[a[i]]++;
		}
		for(i=0;i<K;i++)
		{
			cin>>b[i];
			d[b[i]]++;
		}
		for(i=1;i<=N;i++)
		{
			if(c[i]==0 && d[i]==0)
			sum2++;
			else if(c[i]==d[i])
			sum1++;
			
		}	
		cout<<sum1<<" "<<sum2<<endl;
		

	}
	return 0;
}
