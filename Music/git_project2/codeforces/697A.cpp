#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main(){
	LL t,s,x;
	cin>>t>>s>>x;
	if(x<t)
		cout<<"NO"<<endl;
	else if(x==t)
		cout<<"YES"<<endl;
	else{
		LL temp = x - t;
		if(temp<s)
			cout<<"NO"<<endl;
		
		else if(	temp%s ==0 || temp%s==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
return 0;
}
