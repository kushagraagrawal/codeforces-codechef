#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int N,T,i;
	long long int a[100000];
	cin>>T;
	while(T--)
	{
		cin>>N;
		for(i=0;i<N;i++)
		cin>>a[i];
		sort(a,a+N);
		cout<<a[0] + a[1] <<endl;
	}
	return 0;
}
