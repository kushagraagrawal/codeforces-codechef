#include <iostream>
#include<string.h>
using namespace std;
 
int main() {
	int t,flg=0;
	string x,y;
	cin>>t;
	while(t--)
	{
		cin>>x>>y,flg=0;
		for(int i=0;i<x.length();i++)
		{
			if(x[i]!=63&&y[i]!=63)
			{
				if(x[i]!=y[i])
				{
					flg=1;
					cout<<"No"<<endl;
					break;
				}
			}
		}
		if(flg==0)
		{
			cout<<"Yes"<<endl;
		}
		flg=0;
	}	// your code goes here
	return 0;
} 
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	int T,i,flag = 1;
	cin>>T;
	while(T--)
	{
		flag = 1;
		cin>>s1>>s2;
		for(i=0;i<s1.length();i++)
		{
			if(s1[i]!=s2[i] && s1[i]!='?' && s2[i]!='?')
			{
					flag = 0;
					break;
				
			}
		}
		if(flag)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	
	}
return 0;
}*/
