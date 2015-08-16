#include<bits/stdc++.h>
using namespace std;
void op1(long int a[],long int, long int,long int);
void op2(long int a[],long int, long int,long int);
long long int sum=0;
int main()
{
	long int x,y,n,N,a[200000]={0},i,j;
	long int Q;
	
	cin>>N>>Q;
	/*for(i = 0;i<N;i++)
	a[i] = i;*/
	for (i=1;i<=Q;i++)
	{
		cin>>n>>x>>y;
		if(n==1)
		op1(a,N,x,y);
		if(n==2)
		op2(a,N,x,y);
		
	}
return 0;
}
void op1(long int a[],long int N,long int x,long int y)
{
	long int i=1,j;
	for (j = x-1 ; j<y;j++)
	{
		a[j] += (i*(i+1));
		i++;
		
	}
	/*for (j=0;j<N;j++)
	cout<<a[j]<<" ";*/
}

void op2(long int a[],long int N,long int x,long int y)
{
	long long int j,sum = 0;
	for(j=x-1;j<y;j++)
	{
		sum += a[j];
	}
	cout<<sum%(1000000007)<<endl;
}
