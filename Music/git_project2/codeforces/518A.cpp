#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[101],b[101];
	int i,c[100],flag = 0;
	cin>>a>>b;
	for(i = 0;i<strlen(a);i++)
	{
		if (b[i] - a[i] ==1)
		{	
			c[i] = b[i] - a[i];
			flag = 1;
		}
		else
		{
			c[i] = b[i] - a[i] ;
			if(c[i]!=0)
			flag = 0;
		}
	}
if(flag ==1)
cout<<"No such string";
else
{

for(i=0;i<strlen(a) && flag == 0;i++)
{
	if( c[i] - 1>0)
	a[i] = a[i] + c[i] - 1;
}
if(flag ==0)
cout<<a;
}
return 0;
}
