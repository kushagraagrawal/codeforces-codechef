#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[1001];
	int k,count=0,flag=1;
	int j,l;
	cin>>s;
	cin>>k;
	int len = strlen(s);
	int h = len/k;
	if(len%k!=0)
	cout<<"NO"<<endl;
	else{
	
		for(int i=0;i<len;i+=h )
		{
			for(j=i,l=i+h-1 ;j<(i+l)/2 + 1;j++,l--)
			{
				if(s[j]!=s[l])			//h=6
				{flag = 0;
				}				//s a d d a s t a v v a t
			}							//0 1 2 3 4 5 6 7 8 9 10 11
			if(flag==1)
			{
			count++;}
			//cout<<j<<l<<endl;
			flag = 1;
		}
	
	if(count == k)
	{
	cout<<"YES"<<endl;
	//cout<<count;
}
	else
	{
	cout<<"NO"<<endl;
	//cout<<count;
	}
}
	return 0;
}

