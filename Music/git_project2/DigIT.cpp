#include<bits/stdc++.h>
using namespace std;
long long int sumdigits(long long int);
int main()
{
	long long int sum,A,B,X,Y,K,count=0,i,j;
	cin>>A>>B>>X>>Y>>K;
	for(i=A;i<=B;i++)
	{
		sum = sumdigits(i);
		if(sum>=X&&sum<=Y)
		{
			if(i%K==0)
			count++;
		}
	}
	cout<<count;
	return 0;
}
long long int sumdigits(long long int i)
{	long long int sum=0;
	while(i!=0)
	{
		sum = sum + i%10;
		i = i/10;
	}
return sum;
}
