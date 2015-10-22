#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,n,a[100000],temp=0,sum=0;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for (i=0;i<n;i++)
	{
		
		if(sum <= a[i])
		{
			sum += a[i];
			temp++;
			//cout<<sum<<endl;
		}
		/*else
		sum +=a[i];*/
	}
	cout<<temp<<endl;
	return 0;

}
