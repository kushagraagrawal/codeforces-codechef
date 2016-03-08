#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main()
{
	LL i,j,N,K;
	cin>>N>>K;
	vector<LL>a(N);
	for(i=0;i<N;i++)
	cin>>a[i];
	sort(a.begin(),a.end());
	i = 0;
	j = i+1;
	LL pair = 0;
	while(i<N)
	{
		if(abs(a[i] - a[j])>=K)
		{
			pair+=N-j;
			i++;
		}
		else
		j++;	
	}
	cout<<pair<<endl;
	return 0;
}
