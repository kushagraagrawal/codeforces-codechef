#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	long long int i,j,n,a[100000],b[1000001] = {0},temp,temp1,temp2,count=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]]++;
	}
	j = *max_element(b,b + n);
	for(i=0;i<1000001;i++)
	{
		if(b[i] == j)
		{
			temp = i;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i] == temp)
		{
			count++;
			temp1 = i;
			break;
		}
	}
	temp2 = temp1;
	for(i = temp1 + 1 ;i<n;i++)
	{
		if (a[i]==temp)
		{
			count++;
			temp2++;
		}
		else
		temp2++;
		if (count == j)
		break;
	}
	
	cout<<temp1<<" "<<temp2;
	return 0;
}
