#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	long long int total=0,a[4] , b[4] = {0};
	int k;
	for (k=0;k<4;k++)
	{
		cin>>a[k];
	}
	cin>>s;
	for (k=0;k<s.size();k++)
	{
		b[s[k] - '1']++;
	}
	for (k=0;k<4;k++)
	{
		total += b[k] * a[k];
	}
	cout<<total<<endl;
	return 0;
}
