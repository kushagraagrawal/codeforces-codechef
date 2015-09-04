#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char a[100],j,b[3]={0};
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>j;
		b[a[i] - '+']++;
		cout<<b[0];
	}
	for(int j=0;j<3;j++)
	cout<<b[j]<<endl;
	/*if (b[0]>=b[2])
	cout<<b[0];
	else
	cout<<b[2];*/
	return 0;
}
