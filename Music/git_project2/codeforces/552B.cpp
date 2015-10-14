#include<bits/stdc++.h>
using namespace std;
//long long int digits(long long int);
int main()
{
	long long int sum=0,n,i,j=10;
	cin>>n;
	if(n<j)
	cout<<n<<endl;
	else
	{
	sum = 9;
	for (i=1;j<=n;j = pow(10,i) +1)
	{
		if (n< pow(10,i+1))
		{
			sum+= (i+1)*(n - j + 1);
			//cout<<sum<<endl;
			
		}
		else
		sum += (i+1)*(pow(10,i+1) - j +1) ;
		
		
		i++;
		//cout<<i<<j<<endl;
	}
	cout<<sum<<endl;
	
	}
	return 0;
}
/* long int digits(long long int i)
{
	long long int digits=0;
	while(i)
	{
		i /=10;
		digits++;
	}
	return digits;
}*/
