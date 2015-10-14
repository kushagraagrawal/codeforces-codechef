#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count1=0,count2=0,i,a,b;
	cin>>a>>b;
	while (a!=0 && b!=0)
	{
		count1++;
		a--;
		b--;
	}
	//cout<<a<<b<<endl;
if(a>0)
{
	if (a%2==0)
	count2 = a/2;
	else
	{
		a = a-1;
		count2 = a/2;
	}
}
else if(b>0)
{
	if (b%2==0)
	count2 = b/2;
	else
	{
		b = b-1;
		count2 = b/2;
	}
}
cout<<count1<<" "<<count2<<endl;
return 0;
}
