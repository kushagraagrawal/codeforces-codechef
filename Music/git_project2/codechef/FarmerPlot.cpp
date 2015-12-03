#include<bits/stdc++.h>
using namespace std;
long long int GCD(long long int M,long long int N)
{
	if(N!=0)
		return GCD(N,M%N);
	else
		return M; 
}
int main()
{
	int T;
	long long int M,N,temp,temp1,temp2;
	cin>>T;
	while(T--)
	{
	cin>>M>>N;
	temp = GCD(M,N);
	temp1 = M/temp;
	temp2 = N/temp;
	cout<<temp1*temp2<<endl;
	}
	return 0;
}
