#include<bits/stdc++.h>
using namespace std;
/*void modular_pow(int base,long long int exponent)
{
long long result=1;
while(exponent>0)
{
if(exponent%2==1)
result=(result*base);
exponent=exponent/2;
base=(base*base);
}
cout<<result%100;
}*/


int main()
{
	long long int n;
	cin>>n;
//	modular_pow(5,n);
	if(n==1)
	cout<<"1"<<endl;
	else
	cout<<"25"<<endl;
	return 0;
}
