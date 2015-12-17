#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int a[n],b[n];
	string s;
	cin>>s;
	for(i=0;i<n;i++)
	{
		a[i] = s[i] - '0';
		b[i] = s[i + n] - '0';
	}
	sort(a,a+n);
	sort(b,b+n);
	string out = "YES";
	if (a[0]==b[0])
	out = "NO";
	else if (a[0]<b[0])
	{
		for(int k = 1;k<n;k++)
		{
			if(a[k] >= b[k])
			{
				out = "NO";//cout<<"NO"<<endl;
				break;
			}
		}
	}
	else if (a[0] > b[0])
	{
		for (int j = 1;j<n;j++)
		{
			if(a[j] <= b[j])
			{
				out = "NO";//cout<<"NO"<<endl;
				break;
			}
		}
	}
	cout<<out<<endl;
	return 0;
}
