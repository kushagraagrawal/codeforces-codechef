#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main()
{
	int T;
	cin>>T;
	LL N,i;
	while(T--)
	{
		cin>>N;
		vector<LL> a(N),b(N);
		LL count =0;
		for(i=0;i<N;i++){
			cin>>a[i];
		}
		for(i=0;i<N;i++){
			cin>>b[i];
		}
		if(a[0]>=b[0])
		count++;
		for(i=1;i<N;i++)
		{
			if(a[i]-a[i-1] >= b[i])
			count++;
		}
		cout<<count<<endl;
	}
return 0;
}
