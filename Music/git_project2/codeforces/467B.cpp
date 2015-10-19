#include <iostream>
using namespace std;
int setBits(long long n)
{
	int count=0;
	while(n)
	{
		if(n%2 == 1)
			count++;
		n /= 2;
	}
	return count;
}
int main()
{
	int n,m,k,i,friends=0;
	long long x[1002]={0};
	cin>>n>>m>>k;
	for(i=0;i<=m;++i)
		cin>>x[i];
	for(i=0;i<m;++i)
		if(setBits(x[i]^x[m]) <= k)
			friends++;
 
	cout<<friends<<endl;
	return 0;
}
