#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		LL ans = 0;
		cin>>s;
		int i,j;
		for(i=0,j=s.length() -1 ;i<s.length()/2 && j>=s.length()/2;i++,j--)
		{
			ans += abs(s[i] - s[j]);
		}
	cout<<ans<<endl;
	}
return 0;
}
