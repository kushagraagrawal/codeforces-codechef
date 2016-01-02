#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	char s[50],k[6];
	cin>>x>>s>>k;
	//cout<<k;
	if(strcmp(k,"week")==0)
	{
		if(x==5 || x==6)
		{
			cout<<"53"<<endl;
		}
		else
		cout<<"52"<<endl;
	}
	else
	{
		if(x<=29)
		cout<<"12";
		else if(x==30)
		cout<<"11";
		else if(x==31)
		cout<<"7";
	}
	
return 0;
}
