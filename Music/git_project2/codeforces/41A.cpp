#include<bits/stdc++.h>
//#include<string>
using namespace std;
int main()
{
	char a[101],b[101];
	int i,j=0;
	cin>>a>>b;
	for (i=0;i<strlen(a);i++)
	{
		if(a[i] != b[strlen(a) - 1 - i])
		{
			cout<<"NO"<<endl;
			j = 1;
			break;
		}
	}	
if(j==0)
cout<<"YES"<<endl;
return 0;
}
