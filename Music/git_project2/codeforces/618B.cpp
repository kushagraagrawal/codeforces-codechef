#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,N,j,a;
	int p[110];
	int cnt[110];
	cin>>N;
	bool exist = false;
	for(i=0;i<N;i++)
	{
		memset(cnt,0,sizeof(cnt));
		for(j=0;j<N;j++)
		{
			cin>>a;
			cnt[a]++;
		}
		int m = 0;
		for(j=0;j<N;j++)
		m = max(m,cnt[j]);
		if(m==1 && exist)
		p[i] = N;
		else{
			p[i] = N - m;
			if(p[i]==N-1)
			exist = true;
		}
	
	}
	for (i=0;i<N;i++)
	cout<<p[i]<<" ";
	return 0;

}
