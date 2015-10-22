#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	long int found = s.size() - 1,k;
	for (k = 0;k<s.size();k++)
	{
		if (s[k]=='0')
		{
			found = k;
			break;
		}
	}
	cout<<s.substr(0,found)<<s.substr(found+1)<<endl;
	return 0;


}
