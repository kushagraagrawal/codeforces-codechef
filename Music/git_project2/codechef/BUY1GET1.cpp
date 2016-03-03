#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	string s;
	cin>>T;
	while(T--)
	{
		cin>>s;
		int count=0,i,a[26] ={0},b[26] = {0};
		for(i=0;i<s.length();i++)
		{
			if(isupper(s[i]))
			b[s[i] - 'A']++;
			else
			a[s[i] - 'a']++;
		}
		for(i=0;i<26;i++)
		{
			if(a[i]%2==0)
			count += a[i]/2;
			else if(a[i]%2==1)
			count += a[i]/2 + 1;
			if(b[i]%2==0)
			count += b[i]/2;
			else if(b[i]%2==1)
			count += b[i]/2 + 1;
		}
		cout<<count<<endl;
	}
return 0;
}
