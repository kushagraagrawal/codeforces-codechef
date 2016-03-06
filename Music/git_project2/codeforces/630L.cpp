#include<bits/stdc++.h>
#define ll long long int
#define mod 100000
using namespace std;

ll fpow(ll base,ll power){
	ll result = 1;
    while (power > 0)
    {
    	if (power%2 == 1)
    	{
    		result=(result*base)%mod;
    	}
    	base = (base*base)%mod;
    	power/=2;
    }
	return result%mod;
}
int main()
{
	string s1;
	int i,old[5],ne[5],number=0,base = 1;
	cin>>s1;
	for(i=0;i<s1.length();i++)
	{
	old[i] = s1[i] -'0';
	//cout<<old[i];
	}
	ne[0] = old[0];
	ne[1] = old[2];
	ne[2] = old[4];
	ne[3] = old[3];
	ne[4] = old[1];
	for(i=4;i>=0;i--)
	{
		number += base*ne[i];
		base*=10;
	}
	//cout<<number<<endl;
	if(fpow(number,5)==0)
	cout<<"00000";
	else
	cout<<fpow(number,5);
	return 0;
}
