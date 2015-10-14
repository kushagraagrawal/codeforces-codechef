#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	char temp,flag = 1,j=0,i,a[100],b[11] = "CODEFORCES";
	
	cin>>a;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==b[0])
		{	b[0] = "A";
			temp=i;
			break;
			j++;
		}
	}
	for(i=temp+1;i<strlen(a);i++)
	{
		if(b[j] == a[i])
		{
			/*if (strcmp(b[j],))
			b[j] = 1;*/
			if(b[j-1]==1)
			{
			b[j] = "1";
			j++;
			}
		}
	}
	cout<<b;
	for(i=0;i<strlen(b);i++)
	{	cout<<b[i];
		if(b[i]!="1")
		{	flag = 0;
			cout<<"NO";
			break;
		}
	}
	if (flag == 1)
	cout<<"YES";
	return 0;
}
