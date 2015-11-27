#include<bits/stdc++.h>
using namespace std;
long long int factorial(int n)
{
	long long int temp;
	if(n<=1) return 1;
	temp = n * factorial(n-1);
	return temp;
}
int main()
{
	int T,N,M;
	cin>>T;
	while(T--)
	{
		cin>>M>>N;
		cout<<factorial(M+N) / (factorial(M) * factorial(N))<<endl;
	}
return 0;
}
