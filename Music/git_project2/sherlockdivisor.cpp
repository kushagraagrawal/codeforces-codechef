#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	long long int a,c;
	while(T--)
	{
		long long int count = 0;
		cin>>a;
		
		if(a%2==0)
		count = 1;
		for(long long int i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{
				if(i%2==0)
				{
					count++;
				}
				c = a/i;
				if(c%2==0&&c!=i)
				count++;
			}
		}
	cout<<count<<endl;
	}
	
	return 0;
	
}
