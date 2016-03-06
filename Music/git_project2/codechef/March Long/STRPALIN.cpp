#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,i;
	string s1,s2;
	
	cin>>T;
	
	while(T--)
	{
		int flag = 0;
		int a[26] = {0},b[26]={0};
		cin>>s1>>s2;
		for(i=0;i<s1.length();i++)
		{
			a[s1[i] - 'a']++;
		}
		for(i=0;i<s2.length();i++)
		{
			b[s2[i] - 'a']++;
		}
		for(i=0;i<26;i++)
		{
			if(a[i] > 0 && b[i]>0)
			{
				flag = 1;
				cout<<"Yes"<<endl;
				break;
			}
		}
		if(flag==0)
		cout<<"No"<<endl;
	}
return 0;
}
