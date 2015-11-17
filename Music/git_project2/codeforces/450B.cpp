#include<bits/stdc++.h>
#define a 1000000007
using namespace std;
int main()
{
	long long int x,y,n,temp,output;
	cin>>x>>y>>n;
	
		temp = n%6;
		if (temp==1)
		output = x;
		else if(temp==2)
		output=y;
		else if(temp==3)
		output=(y-x);
		else if(temp==4)
		output=(-x);
		else if(temp==5)
		output=(-y);
		else
		output=(x-y);
	if(output < 0)
	{
		output += 2*a;
	}
	cout<<output%a;
return 0;
}
