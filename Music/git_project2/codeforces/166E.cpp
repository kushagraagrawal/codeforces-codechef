#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k=0;
	cin>>n;
	for (long int i=1;i<n;i++)
	{
		if(i%2==1) k=((k+1)*3)%1000000007 ;
		else k=((k-1)*3)%1000000007;
	}
	cout<<k;
	return 0;


}
