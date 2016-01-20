#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	long long int N,i;
	cin>>T;
	while(T--)
	{
		cin>>N;
		long int a[N];
		for(i=0;i<N;i++)
		{
			cin>>a[i];
		}
		i = *min_element(a,a+N);
		cout<<(N-1) * i<<endl;
	}
return 0;
}
