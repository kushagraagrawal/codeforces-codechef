#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main()
{
	LL temp,a,b,c;
	cin>>a>>b>>c;
	if(c==0)
	{
		if(a==b)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	else
	{
		//cout<<(b-a)/c;
		if((b-a)%c==0 && (b-a)/c>=0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
		return 0;
}
