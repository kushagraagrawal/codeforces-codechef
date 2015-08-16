#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int N;
		cin>>N;
		
		
		long long int sum1 = (N*(N+1))/2;
		long long int sum2=0;
		/* alternate
		for(int i=1;i<=N;i++)
		{
			sum2 += i*i;
		}*/
		long long int sum2 = (N*(N+1)*((2*N)+1))/6;
		sum1 = sum1 * sum1;
		cout<<sum1<<" "<<sum2<<endl;
		//cout<<sum1 - sum2<<endl;
	}
	return 0;
}
