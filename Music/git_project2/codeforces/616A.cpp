#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,a1,b1;
	long long int ch=0,i,j;
	cin>>a1>>b1;
	for(i=0;i<a1.size();i++)
	{
		if(a1[i] != '0' && ch==0)
		ch++;
		if(ch!=0)
		a += a1[i];
		//cout<<a<<endl;
	}
	ch = 0;
	for(i=0;i<b1.size();i++)
	{
		if(b1[i] != '0' && ch==0)
		ch++;
		if(ch!=0)
		b += b1[i];
	}
	//cout<<a;
	if (a.size() > b.size())
	cout<<">";
	else if (a.size() < b.size())
	cout<<"<";
	else
	{
		if(a>b)
		cout<<">";
		else if(a<b)
		cout<<"<";
		else
		cout<<"=";
	}
return 0;
}
