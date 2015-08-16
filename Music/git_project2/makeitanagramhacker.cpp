#include<bits/stdc++.h>
using namespace std;
char a[10000];
char b[10000];
char c1[26] = {0},c2[26] = {0};
int main()
{	long long int count = 0;
	cin>>a;
	cin>>b;
	
	for(int i=0;i<strlen(a);i++)
	{
		c1[a[i] - 'a']++;
		
	}
	for(int k=0;k<strlen(b);k++)
	{
		c2[b[k] - 'a']++;
	}
	for(int j=0;j<26;j++)
	{
		
		count += abs(c1[j]-c2[j]) ;
	}
	cout<<count<<endl;
	return 0;
	
}
