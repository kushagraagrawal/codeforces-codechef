#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int N,i;
	cin>>N;
	vector<long long int> a(N);
	for(i=0;i<N;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(i=0;i<N;i++)
	{
		a[i] *= N-i;
	}
	cout<<*max_element(a.begin(),a.end());
	return 0;
}
