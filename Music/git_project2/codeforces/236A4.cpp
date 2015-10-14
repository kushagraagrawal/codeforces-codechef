#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[101];
	int flag=1,b[26] = {0},count=0;
	cin>>a;
	for(int i=0;i<strlen(a);i++)
	b[a[i] - 'a']++;
	for(int j=0;j<26;j++)
	{
		if (b[j]>0)
		{
			count++;
			
		}
	}
if (count%2==0)
cout<<"CHAT WITH HER!";
else
cout<<"IGNORE HIM!";
return 0;
}
