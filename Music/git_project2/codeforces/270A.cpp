#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,temp,temp2,n;
	//float b[] = {60,90,108,120,135,140,144,}
	cin>>t;
	while(t--)
	{
		cin>>a;
		if (360%(180 - a) == 0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
return 0;
}
