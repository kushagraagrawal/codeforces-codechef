#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,N;
	cin>>N;
	long long int f[56];
	f[1] = 2;
	f[2] = 6;
	if(N==1)
	cout<<f[N];
	else if(N==2)
	cout<<f[N];
	else
	{
		for(i=3;i<=N;i++)
		f[i] = f[i-1] + pow(2,i);
		cout<<f[N];
		}	
return 0;

}
