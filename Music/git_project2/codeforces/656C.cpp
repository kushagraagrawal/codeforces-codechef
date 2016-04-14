#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int i,ans=0;
	
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		ans += s[i] - 'A' + 1;
		else if(s[i] >= 'a' && s[i]<='z')
		ans -= s[i] -'a' + 1;
	}
	cout<<ans;
}
