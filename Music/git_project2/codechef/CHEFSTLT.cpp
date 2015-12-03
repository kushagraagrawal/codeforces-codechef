#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,i;
	string s1,s2;
	cin>>T;
	while(T--)
	{
		int mindiff = 0 , maxdiff = 0;
		cin>>s1>>s2;
		for(i = 0;i<s1.length();i++)
		{
			if(s1[i]!=s2[i])
			{
				if(s1[i]=='?' || s2[i]=='?')
				maxdiff++;
				else
				{
					maxdiff++;
					mindiff++;
				}
			}
			else
			{
				if(s1[i]=='?'&&s2[i]=='?')
				maxdiff++;
				
			}
		}
		cout<<mindiff<<" "<<maxdiff<<endl;
	}
return 0;
}
