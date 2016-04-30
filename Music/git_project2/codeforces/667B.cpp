#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main()
{
	LL n,i;
	cin>>n;
	vector<LL>a(n);
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a.begin(),a.end());
	LL sum=0;
	for(i=0;i<n-1;i++)
	{
		sum+=a[i];
	}
	cout<<a[n-1] - sum + 1;
	return 0;

}
