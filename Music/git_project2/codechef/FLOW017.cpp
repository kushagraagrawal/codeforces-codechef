#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	long long int a[3];
	cin>>T;
	while(T--)
	{
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		cout<<a[1]<<endl;
	}
return 0;
}
