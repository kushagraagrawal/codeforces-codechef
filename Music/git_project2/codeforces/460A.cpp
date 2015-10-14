#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,count=0;
	cin>>n>>m;
	if(m>n)
	cout<<n;
	else
	{
		while(n>0)
		{
			if (n>=m)
			count += m;
			else
			count +=n;
			n = n-m;
			n = n +1;
		}
	cout<<count<<endl;

	}

return 0;
}
