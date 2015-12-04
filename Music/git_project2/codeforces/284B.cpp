#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int i,n,a[3] = {0};
	string s;
	cin>>n>>s;
	for(i=0;i<s.length();i++)
	{
		if(s[i] == 'A')
		a[0]++;
		else if(s[i]=='I')
		a[1]++;
		else
		a[2]++;
	}
	if(a[1]==1)
	cout<<"1"<<endl;
	else if(a[1]==0)
	cout<<a[0]<<endl;
	else
	cout<<"0"<<endl;
		
	return 0;
}
