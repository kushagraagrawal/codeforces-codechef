#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	long long int i,N,M;
	long long int a[100000];
	cin>>T;
	while(T--)
	{
		long long int b[100001] = {0};
		cin>>N;
		for(i=0;i<N;i++)
		{
			cin>>a[i];
			b[a[i]]++;
		}
		for(i=1;i<100001;i++)
		{
			if(b[i]%2==1)
			cout<<i<<endl;
		}
	}
return 0;
}
