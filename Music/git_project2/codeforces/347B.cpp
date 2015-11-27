#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,n,a[100000],total = 0,flag=1;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		total++;
		else if (a[a[i]]==i)
		flag = 0;	
		
	}
	if (flag==0)
	total +=2;
	else if(total <n)
	total++;
	cout<<total<<endl;
	return 0;
}
