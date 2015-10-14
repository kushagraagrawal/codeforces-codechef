#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int a[100001] ={0},n,i,j;
	for (i=2;i<=100001;i++)
	{ if(a[i]==0)
	{for( j=i*2;j<=100001;j=j+i)
	{a[j]=1;
	}
	}
	}
	/*for (i=0;i<1001;i++)
	cout<<a[i]<<" ";*/
	cin>>n;
	for (i=1;i<n;i++)
	{
		if (a[i] == 1 && a[n-i] == 1)
		{
			cout<<i<<" "<<n - i;
			break;
		}
	}

return 0;




}
