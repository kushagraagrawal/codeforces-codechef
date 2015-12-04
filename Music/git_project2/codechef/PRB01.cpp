#include<bits/stdc++.h>
using namespace std;
bool isPrime(long int N)
{
	long int count=0,i;
	
	for(i = 1;i<sqrt(N);i++)
	{
		if(N%i==0)
		count++;
	}
	return (count==1);
}
int main()
{
	int T;
	long int N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		if(isPrime(N))
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;	
	}
return 0;
}
