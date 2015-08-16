#include<iostream>
using namespace std;
int a[100000];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int sum1 =0,sum2 =0,val,best_sum=0,best_sum2=0;
		int N;
		cin>>N;
		for(int i=0;i<N;i++)
		cin>>a[i];
		for(int j=0;j<N;j++)
		{
			/*if (a[j]>0)
			sum2+=a[j];*/
			sum2+=a[j];
			if (sum2>best_sum2)
			best_sum2 = sum2;
			
			val = sum1 + a[j];
			if(val>0)
			sum1=val;
			else
			sum1=0;
			if (sum1>best_sum)
			best_sum = sum1;
			
		}
		
		cout<<best_sum<<" "<<sum2<<endl;
		
	}
	
	
	return 0;
}
