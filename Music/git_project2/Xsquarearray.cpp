#include<bits/stdc++.h>
using namespace std;
long long int a[100000],best_sum2=0,val=0,sum1=0;
int main()
{
	long int T;
	cin>>T;
	while(T--)
	{	long long int best_sum=0;
		unsigned int N;
		cin>>N;
		long long int sum2[N];
		for(int i=0;i<N;i++)
		{
			cin>>a[i];
		}
		int max=a[0];
		for(int j=0;j<N;j++)
		{
			if(a[j+1]>a[j])
			max=a[j+1];
		sum2[j] =max;
		
				
		}
		val=sum2[0];
		for(int k=0;k<N-1;k++)
			{
				best_sum += sum2[k];
				if(sum2[k+1]>sum2[k])
				val=sum2[k+1];
			}
		//best_sum-=val;
		cout<<best_sum<<endl;
	}
	return 0;
}
