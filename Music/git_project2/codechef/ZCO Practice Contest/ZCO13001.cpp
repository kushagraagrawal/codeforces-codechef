#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int i,N;
	cin>>N;
	vector<long long int>a(N);
	for(i=0;i<N;i++)
	cin>>a[i];
	sort(a.begin(),a.end());
	long long int sum = 0;
	if (N<2)
	cout<<"0"<<endl;
	else
	{
		for(i=N-1;i>=0;i--)
		{
			sum+= (a[i]*i - a[i]*(N-i-1));
		}
		cout<<sum<<endl;
	}
return 0;
}
