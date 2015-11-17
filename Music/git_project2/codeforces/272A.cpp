#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp,i,sum=0,output = 0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		sum += temp;
		
	}
	for (i=1;i<=5;i++)
	{
		if ((sum + i)%(n+1) !=1)
		output++;
	}
	cout<<output<<endl;
	return 0;
}
