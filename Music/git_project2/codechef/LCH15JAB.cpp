#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,j,i,flag = 1,temp;
	string s;
	cin>>T;
	while(T--)
	{
		int a[26] = {0};
		flag = 1;
		temp = 0;
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			a[s[i] - 'a']++;
		}
		for(i=0;i<26;i++)
		{
			temp = 0;
			for(j=0;j<26;j++)
			{
				if(i!=j)
				{
					temp += a[j];
				}
			}
		//	cout<<a[i]<<" "<<temp<<endl;
			if (a[i] == temp)
			{
				cout<<"YES"<<endl;
				flag = 0;
				break;
			}
		}
	if(flag)
	cout<<"NO"<<endl;
	}
return 0;
}
