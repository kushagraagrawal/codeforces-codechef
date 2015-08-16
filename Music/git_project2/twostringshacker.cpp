#include<bits/stdc++.h>
using namespace std;
char a[100000];
char b[100000];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{	int count=0;
		int c[26] = {0};
		int d[26]= {0};
		cin>>a;
		cin>>b;
		int e=strlen(a);
		int f=strlen(b);
		for(int i=0;i<e;i++)
		{
			c[a[i]-'a']+=1;
		}
		for(int j=0;j<f;j++)
		{
			
			d[b[j]-'a']+=1;
		}
		for(int k=0;k<26;k++)
		{
			if((c[k]>0)&&(d[k]>0))
			count++;
		}
		if(count>0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	
	
	
}
