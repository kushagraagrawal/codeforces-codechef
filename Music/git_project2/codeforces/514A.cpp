#include<bits/stdc++.h>
using namespace std;
int main()
{
	//int a[10] = {0};
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='9' && i==0)
		continue;
		else if(s[i] > '4')
		s[i] = '9' - s[i] + '0';
	}
	cout<<s;
	return 0;
}
