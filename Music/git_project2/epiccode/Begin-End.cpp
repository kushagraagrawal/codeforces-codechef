#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,j,N,count=0;
	char a[1000000];
	cin>>N;
	cin>>a;
	for(i=0;i<strlen(a);i++)
	{
		for(j=strlen(a)-1;j>=i;j--)
		{
			if(a[i]==a[j])
			count++;
		}
	}
	cout<<count<<endl;
return 0;
}
