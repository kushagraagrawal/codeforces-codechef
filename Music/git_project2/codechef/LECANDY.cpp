#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,N;
	long long int C;
	long int a[100];
	cin>>T;
	while(T--)
	{
		long long int sum = 0;
		cin>>N>>C;
		for(int i=0;i<N;i++)
		{
			cin>>a[i];
			sum += a[i];
		}
		if (sum<=C)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;

	}
return 0;
}
