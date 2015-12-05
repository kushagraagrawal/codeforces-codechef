#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int f=0,s1=0,k;
	for(k=0;k<s.size();k++)
	{
		if(s[k] == '4')
		f++;
		else if(s[k] == '7')
		s1++;		
	}
	if(f==0 && s1==0)
	cout<<"-1"<<endl;
	else if(f>=s1)
	cout<<"4"<<endl;
	else
	cout<<"7"<<endl;
	return 0;

}
