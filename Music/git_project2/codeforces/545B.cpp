#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2,s3;
	long int n,i,count=0;
	int flag = 1;
	cin>>s1;
	cin>>s2;
	for(i=0;i<s1.size();i++)
	{
		if (s1[i]==s2[i])
		{
			s3.push_back(s1[i]);
		}
		else if (s1[i] != s2[i] && flag==1)
		{
			count++;
			if (s1[i]=='1')
			{
				s3.push_back('0');
			}
			else
			s3.push_back('1');
		flag = 0;
		}
		else if (s1[i] != s2[i] && flag==0)
		{
			count++;
			if (s2[i]=='1')
			{
				s3.push_back('0');
			}
			else
			s3.push_back('1');
		flag = 1;
		}
	}
	//cout<<count<<" ";
	if (count%2==0)
	cout<<s3;
	else
	cout<<"impossible"<<endl;
	return 0;
}
