#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int T,n,e,i,c;
	cin>>T;
	string s;
	while(T--)
	{
		c=0;
		cin>>s;
		n = s.length();
		e = n*(n+1)/2;
		for(i=0;i<n;i++) 
		{
			if(s[i]== '7')
			c++;
			else
			c=0;
			e-=c;
		}
		cout<<e<<endl;
	}
return 0;
}
