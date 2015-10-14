#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[101],b[101],c[101];
	int flag=0,i,d[26] = {0},e[26] = {0};
	cin>>a;
	cin>>b;
	cin>>c;
	for (i = 0;i<strlen(a);i++)
	{
		d[a[i] - 'A']++;
	}
	for(i=0;i<strlen(b);i++)
	{
		d[b[i] - 'A']++;
	}
	for(i=0;i<strlen(c);i++)
	{
		e[c[i] - 'A']++;
	}
	for(i=0;i<26;i++)
	{
		if (d[i]!=e[i])
		{
			cout<<"NO"<<endl;
			flag = 1;
			break;
		}
	}
	if(flag ==0)
	cout<<"YES";
	return 0;
	
}
