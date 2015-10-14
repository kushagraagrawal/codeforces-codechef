#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,a[100];
	long int sum=0,temp=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	sum+=a[i];
	}
	sort(a,a+n);
	for(i=n-1;i>=0;i--)
	{
		temp += a[i];
		if(temp>sum/2)
		{
			cout<< (n) - i;
			break;
		}
	}
return 0;
}
