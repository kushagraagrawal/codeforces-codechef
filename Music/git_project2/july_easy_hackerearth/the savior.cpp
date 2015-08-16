#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int T,N,i,j, a[1000] , b[100001];
	cin>>T;
	while (T--)
	{
		long long int count =0;
		cin>>N;
		for(i=0;i<N;i++)
		cin>>a[i];
		for(i=0;i<N;i++)
		{
			for (j = i+1 ;j<N;j++)
			{
				if (a[i]!=a[j]&& ((a[i] + a[j])%2==0))
				count++;
			}
		}
		cout<<count<<endl;
	}
}
