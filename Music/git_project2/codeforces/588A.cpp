#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	long int n,i;
	long long int price = 100000000,ans = 0,j;
	cin>>n;
	while(n--)
	{
		cin>>i>>j;
		price = min(price,j);
		ans += i * price;
	}
cout<<ans<<endl;
return 0;
}
