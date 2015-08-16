#include<iostream>
using namespace std;
int a[101];
int main()

{
	int T;
	long int ways;
	cin>>T;
	while(T--)
	{	ways=1;
		int N;
		cin>>N;
		for(int i=0;i<(N-1);i++)
		{
		cin>>a[i];
		ways*=a[i];
		}
		cout<<ways<<endl;
	}
	
	
	return 0;
	
}
