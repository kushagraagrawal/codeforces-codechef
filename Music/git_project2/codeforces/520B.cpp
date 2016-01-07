#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int m,n,count=0;
	cin>>n>>m;
	if (m < n)
	{
		cout<< n - m<<endl;
	}
	else
	{
		while(n<m)
		{
			if(m%2==0)
			{
				m /= 2;
			}
			else
			m++;
			count++;
		}
		cout<<count + n - m <<endl;
	}
	
	return 0;
}
