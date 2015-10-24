#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	long long temp,temp2,flag = 1,i=1;
	cin>>n>>m;
	temp = (n*(n+1)) /2;
	temp2 = m / temp;
	m -= temp * temp2;
	while (flag)
	{
		
		m -= i;
		i++;
		if (m<0)
		flag = 0;
	}
	cout<<m + --i;
return 0;
}
