#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,temp,max = 0,sum=0;
	cin>>n>>s;
	while (n--)
	{
		cin>>temp;
		if (temp > max) max = temp;
		sum += temp;
	}
	sum -= max;
	if(sum<=s)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}
