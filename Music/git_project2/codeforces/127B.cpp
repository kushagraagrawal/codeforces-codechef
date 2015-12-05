#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp,i , b[101] =  {0},count=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		b[temp]++;
	}
	for(i=1;i<101;i++)
	{
		count+= b[i]/2;
	}
	count/=2;
	cout<<count<<endl;
	return 0;
}
