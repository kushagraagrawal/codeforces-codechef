#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int T,N,i;
	cin>>T;
	while(T--)
	{
		long long int sum = 0,temp=1;
		cin>>N;
		sum = N;
		vector <long long int> a(N);
		for(i=0;i<N;i++)
		{
			cin>>a[i];
			if(i)
			{
				if(a[i]>=a[i-1])
				{
					sum +=temp;
					temp++;
				}
				else
				temp = 1;
			}
			
		
		
		}
		cout<<sum<<endl;
	
	
	}
	return 0;
}
