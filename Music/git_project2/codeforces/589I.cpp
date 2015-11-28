#include<bits/stdc++.h>
using namespace std;
int main()
{
	int temp,n,i,k,count=0;
	int b[101] = {0};
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		b[temp]++;
	}
	temp = n/k;
	for(i=1;i<101;i++)
	{
		if (b[i] > 0 && b[i] > temp)
		{
			count+=b[i] - temp;
		}
	}
cout<<count<<endl;
return 0;

}
