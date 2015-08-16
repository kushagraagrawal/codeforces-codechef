#include<iostream>
using namespace std;
long int factorial (int);
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		long int fact=factorial(N-1);
		cout<<fact<<endl;
		
		
	}
	
	return 0;
	
}
 long int factorial (int N)
{
	if(N==0)
	return 0;
	long int sum=0;
	while(N)
	{
		sum+=N;
		N--;
	}
	return sum;
	
}
