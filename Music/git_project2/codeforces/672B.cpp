#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	string s;
	cin>>s;
	long long int i,a[26]={0};
	if(n>=27)
	cout<<"-1";
	else{
	
	for(i=0;i<n;i++)
	{
		a[s[i]-'a']++;
	}
	long long int ans=0;
	for(i=0;i<26;i++)
	{
		if(a[i]>0)
		ans+=a[i]-1;
	}
	cout<<ans<<endl;
	}	
	return 0;
}
