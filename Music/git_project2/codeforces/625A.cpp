#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,a,b,c,temp ,ans = 0;
	cin>>n>>a>>b>>c;
	temp = b - c;
	if(n<a && n<b)
	cout<<"0";
	else if(n<b)
	cout<<n/a;
	else if(a<=temp)
	cout<<n/a;
	else 
	{
		ans += (n-c)/(b-c);
		n -= ans * temp;
		ans += n/a;
		cout<<ans<<endl;
	}
return 0;
}
