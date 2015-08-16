#include<bits/stdc++.h>
using namespace std;
char a[100];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{	int count=0,flag=0;
		cin>>a;
		int c=strlen(a);
		if(c<=2)
		cout<<"No"<<endl;
		else
		{	for(int j=0;j<c;j++)
			for(int i=j+1;i<c;i++)
			{
				if(a[j]==a[i])
				{
				cout<<"Yes"<<endl;
				flag=1;
				break;
			}
			if(flag==0)	
			break;
			}
		}
	
	}
	return 0;
	
}
