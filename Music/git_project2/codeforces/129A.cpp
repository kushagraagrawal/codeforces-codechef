#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	int a[100],count = 0;
	long sum = 0;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		//b[a[i]]++;
		sum += a[i];
	}
	long sum2 = sum % 2;
	for(i=0;i<n;i++)
	{
		if (sum2 == a[i] % 2)
		count++;
	}
	cout<<count<<endl;
	return 0;
}
