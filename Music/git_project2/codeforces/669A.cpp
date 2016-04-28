#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main()
{
	LL n;
	cin>>n;
	if(n%3==0)
	cout<<(n/3*2);
	else if(n%3==1)
	cout<<(n/3*2 + 1);
	else
	cout<<(n/3*2+1);
	return 0;
}
