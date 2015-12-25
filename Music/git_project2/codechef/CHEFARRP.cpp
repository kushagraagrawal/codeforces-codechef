#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,n,i,j,count=0;
	long long int a[50];
	cin>>T;
	while(T--)
	{
		long long int sum =0,prod = 1;
		count = 0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n-1;i++)
		{
			sum = a[i];
			prod = a[i];
			for(j=i+1;j<n;j++)
			{
				sum += a[j];
				prod *= a[j];
				if (sum == prod)
				count++;
			}
		}

		cout<<count + n<<endl;
		}
}
