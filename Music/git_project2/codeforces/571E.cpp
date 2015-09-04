#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int N,a[200],i,flag1=0,flag2=0;
	cin>>N;
	for(i=0;i<N*2;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<N*2;i+=2)
	{	//cout<<a[i]<<endl;
		if(a[i]%a[i+2]==0 || a[i+2]%a[i]==0)
		flag1 = 1;
		else if (a[i+1]%a[i+3] == 0 || a[i+3]%a[i+1] ==0)
		flag2=1;		
	}
	cout<<flag1<<flag2;
	if (flag1 ==0 && flag2 ==0)
	{
	cout<<"-1";
	}
	else
	{
		
	}
}
