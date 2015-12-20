#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,n,score = 0;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		//score+=a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		score += (i+2) * a[i];
	}
	score -= a[n-1];
	cout<<score<<endl;
	return 0;
}
