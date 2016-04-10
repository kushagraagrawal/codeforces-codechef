#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main()
{
	int T;
	LL N,i;
	string s;
	
	cin>>T;
	while(T--){
		cin>>N;
		LL a[3] = {0};
		cin>>s;
		for(i=0;i<N;i++)
		{
			if(s[i]=='R')
			a[0]++;
			else if(s[i]=='G')
			a[1]++;
			else
			a[2]++;
		}
		sort(a,a+3);
		cout<<a[0]+a[1]<<endl;
	}
return 0;
}
