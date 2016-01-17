#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,a,temp1,temp2,ans;
	cin>>n>>m>>a;
	temp1 = n%a > 0;
	temp2 = m%a > 0;
	ans = (n/a + temp1) * (m/a + temp2);
	cout<<ans<<endl;
}
