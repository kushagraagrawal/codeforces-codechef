#include<bits/stdc++.h>
#define LL long long int 
using namespace std;
int main()
{
	int T;
	cin>>T;
	LL n,h,i;
	while(T--){
		cin>>n;
		for(h=1;n>=h;h++)
		n-=h;
		cout<<h-1<<endl;
	}
return 0;
}
