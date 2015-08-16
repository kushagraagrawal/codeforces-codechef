#include<bits/stdc++.h>
using namespace std;
char a[10000];
int main()
{
	
	int T;
	cin>>T;
	while(T--)
	{	int N=0;
	int b[26] = {0};
	int f[26]={0};
		cin>>a;
		int c = strlen(a);
		if(c%2!=0)
		{
			N=-1;
			}
		else
		{
			int d = c/2;
			for(int i=0;i<d;i++)
			{
				b[a[i] - 'a']+=1;
				f[a[i+d] - 'a']+=1;
				}
			
			for(int j=0;j<26;j++)
			{
				if(b[j]!=f[j])
				N+=abs(b[j]-f[j]);
			
			}
			N=N/2;
		}
		cout<<N<<endl;
	}
	
	
	
return 0;	
	
}
