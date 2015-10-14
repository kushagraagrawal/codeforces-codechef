#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	if(n>0)
	cout<<n;
	else
	{
		long long int aux = abs(n);
		long long int d1 = aux %10;
		aux /= 10;
		long long int d2 = aux%10;
		aux /=10;
		cout<< -(aux * 10 + min(d1,d2))<<endl;
	}
return 0;
}
