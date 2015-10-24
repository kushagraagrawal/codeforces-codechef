#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int k,i;
	long int temp=0,temp1;
	int a[26];
	cin>>s;
	cin>>k;
	for (i=0;i<26;i++)
	{
		cin>>a[i];
	}
	temp1 = *max_element(a,a+26);
	for (i=0;i<s.size();i++)
	{
		temp += (i+1)* a[s[i] - 'a'];
	}
	/*cout<<temp<<endl;
	cout<<temp1<<endl;*/
	for (i = s.size() + 1;i <= s.size() + k;i++)
	{
		temp += temp1 * i;
	}
	cout<<temp;
	return 0;
}
