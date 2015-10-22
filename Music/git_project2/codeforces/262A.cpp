#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,n,i,temp=0,count=0;
	string s;
	cin>>n>>k;
	while(n--)
	{
		temp = 0;
		cin>>s;
		for (i=0;i<s.size();i++)
		{
			if (s[i] =='4' || s[i]=='7')
			temp++; 
		}
		//cout<<temp<<endl;
		if (temp<=k)
		count++;
	}
	cout<<count<<endl;
	return 0;
}
