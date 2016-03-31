#include<bits/stdc++.h>
#define LL long long int
const LL maxn = 1000000009;
using namespace std;
bitset<maxn> a;
int main()
{
	LL i,n,m,count=0,temp,sum=0;
	cin>>n>>m;
	
	for(i=0;i<n;i++)
	{
		cin>>temp;
		a[temp] = 1;
	}
	for(i=1;i<maxn;i++)
	{
		if(a[i]==0 && sum + i <=m)
		{
			sum+=i;
			count++;
			//cout<<i<<" ";
		}
		else if(sum + i>m)
		break;
	}
	cout<<count<<endl;
	sum = 0;
	for(i=1;i<maxn;i++)
	{
		if(a[i]==0 && sum + i <=m)
		{
			sum+=i;
			//count++;
			cout<<i<<" ";
		}
		else if(sum+i>m)
		break;
	}

return 0;
}

