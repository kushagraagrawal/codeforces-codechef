#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a;
	cin>>a;
	int count = 0;
	while(a)	
	{
		if(a%8==1)
		count++;
		a/=8;
	}
	cout<<count<<endl;
	return 0;
}
