#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a[3000],N,i,j,sum=0,k,max=0;
	cin>>N;
	for(i=0;i<N;i++)
		cin>>a[i];
	for (j = 1;j<=N/2;j++)
	{
		for(i=0;i<=N/2;i+=j)
		{
			for(k=i;k<i+j;k++)
			{
				sum +=a[k]*a[N/2 + k];
			}
		if(sum>max)
		max = sum;
		sum = 0;
		
		}
	}
	cout<<max<<endl;
	return 0;

}
