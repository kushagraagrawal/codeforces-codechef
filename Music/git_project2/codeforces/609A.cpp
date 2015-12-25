#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector <int> USB(n);
	int i,count=0;
	long int m;
	
	
	cin>>m;
	for(i=0;i<n;i++)
	{
		cin>>USB[i];
	}
	sort(USB.begin(),USB.end());
	for(i = n-1;i>=0 && m>0 ;i--)
	{
		m -= USB[i];
		count++;
	}
	cout<<count<<endl;
}
