#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,i;
	string s;
	cin>>T;
	while(T--)
	{
		int count1=0,count2=0;
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='N')
			count1++;
			else if(s[i]=='S')
			count1--;
		    else if(s[i]=='E')
			count2++;
			else if(s[i]=='W')
			count2--;
	
		}
		if(count1>0 && count2 == 0)
		cout<<"NORTH\n";
		else if(count1<0 && count2==0)
		cout<<"SOUTH\n";
		else if(count1==0 && count2 > 0)
		cout<<"EAST\n";
		else if(count1==0 && count2 < 0)
		cout<<"WEST\n";
		else if(count1>0 && count2 > 0)
		cout<<"NORTHEAST\n";
		else if(count1>0 && count2 < 0)
		cout<<"NORTHWEST\n";
		else if(count1<0 && count2 > 0)
		cout<<"SOUTHEAST\n";
		else if(count1<0 && count2 < 0)
		cout<<"SOUTHWEST\n";
	}
return 0;
}
