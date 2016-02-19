#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,i;
	string s;
	cin>>N;
	while(N--)
	{
		int a[26]={0},flag1=1,flag2=1;
		cin>>s;
		for(i=0;i<s.size();i++)
		{
			if(isupper(s[i]))
			a[s[i] - 'A']++;
			else
			a[s[i] -'a']++;
		}
		for(i=0;i<26;i++)
		{
			if(a[i] > 0)
			{
				if(i%2==0)
				{
					if(a[i]%2==1)
					{
						flag1=0;
						break;
					}
				}
				else if(i%2==1)
				{
					if(a[i]%2==0)
					{
						flag2=0;
						break;
					}
				}
						
			
			}
		}
		if(flag1 && flag2)
		cout<<"@1"<<endl;
		else
		cout<<"@0"<<endl;
	}
return 0;
}
