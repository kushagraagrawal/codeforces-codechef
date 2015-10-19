#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,temp,count=0;
		cin>>n>>m;
	if (n + m <3 || n==0 || m==0)
	cout<<"0";
	else
	{
		while (n>0 && m>0)
		{
			if(n > m && n>=2)
			{
				n -=2;
				m--;
				count++;
			}
			else if(m>n && m>=2)
			{
				m-=2;
				n--;
				count++;
			}
			else if(m==n && m>=2)
			{
				n--;
				m-=2;
				count++;
			}
			else
			break;
		}
		cout<<count<<endl;
	}
return 0;
}
