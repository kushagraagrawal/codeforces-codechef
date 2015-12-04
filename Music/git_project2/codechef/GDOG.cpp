#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	long int N,K;
	cin>>T;
	while(T--)
	{
		cin>>N>>K;
		int max = N%1;
		for(int i = 2;i<=K;i++)
		{
			if(N%i>max)
			max = N%i;
		}
		cout<<max<<endl;
	}
return 0;
}
