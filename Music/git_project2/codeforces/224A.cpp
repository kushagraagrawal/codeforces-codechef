#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a1,a2,a3,l1,l2,b1;
	cin>>a1>>a2>>a3;
	l2 = sqrt((a2*a3)/a1);
	l1 = sqrt((a1*a2)/a3);
	b1 = sqrt((a1*a3)/a2);
	cout<<4*(l1+l2+b1);
	return 0;
}
