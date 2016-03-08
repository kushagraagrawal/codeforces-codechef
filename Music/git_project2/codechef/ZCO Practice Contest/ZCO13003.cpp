#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main()
{
	LL N,K,i,j;
	cin>>N>>K;
	vector<LL>a(N);
	for(i=0;i<N;i++)
	cin>>a[i];
	sort(a.begin(),a.end());
	LL pair = 0;
	i=0;
	j = N-1;
	while(i<j)
	{
		if(a[i]+a[j]<K)
		{
			pair += j-i;
			i++;
				
		}	
		else
		j--;
	}	
	/*for(i=0;i<N;i++)
	{
		/*j = N-1;
		while(i<j)
		{
			if(a[i] + a[j] < K)
			pair++;
			j--;
		}
		j = N-1
	}*/
	cout<<pair<<endl;
	return 0;
}

