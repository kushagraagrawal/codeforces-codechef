#include<bits/stdc++.h>
using namespace std;
int gcd(int,int);
int main()
{
	int N;
	int a[50];
	long long int product = 1,GCD,temp;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
	}
	GCD = a[0];
	product *= a[0];
	for(int i=1;i<N;i++)
	{
		product *=a[i];
		GCD = gcd(GCD,a[i]);
	}
	temp = pow(product,GCD);
	cout<<temp%(1000000007);
	return 0;
}
int gcd(int a,int b)
{
    int t;
    while(a)
    {
        t = a;
        a = b%a;
        b = t;
    }
    return b;
}
