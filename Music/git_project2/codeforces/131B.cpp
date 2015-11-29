#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,sum=0,temp;
	long long int a[21] = {0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		a[10 + temp]++;
	}
	for(i=0;i<10;i++)
	{
		sum += a[i] * a[2 * 10 - i];
		
		//cout<<sum<<endl;
	}
	sum+= a[10] * (a[10] - 1) / 2;
	cout<<sum<<endl;
	
return 0;
}
