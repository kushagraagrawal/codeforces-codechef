#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	char a[1001],b[1001];
	cin>>n;
	cin>>a;
	cin>>b;
	for(int i=0;i<n;i++)
	{
		if (abs(a[i] - b[i])<5)
		{
			count += abs(a[i] - b[i]);
		}
		else
		count += 10 - abs(a[i] - b[i]);				
	}
	cout<<count<<endl;
return 0;
}
