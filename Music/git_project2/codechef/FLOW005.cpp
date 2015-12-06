#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	long long int N,count=0;
	cin>>T;
	while(T--)
	{
		count=0;
		cin>>N;
		count += N/100;
		N-= (100 * (N/100));
		count+= N/50;
		N -= (50 * (N/50));
		count += N/10;
		N-= (10 * (N/10));
		count += N/5;
		N -= (5 * (N/5));
		count += N/2;
		N -= (2 * (N/2));
		count += N/1;
		N-= (1 * (N/1));
		cout<<count<<endl;
	}
	return 0;
}
