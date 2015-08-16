#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int temp,a[10001]={0};
	long long int N,M,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>temp;
		a[temp]++;
	}
	cin>>M;
	for(i=0;i<M;i++)
	{
		cin>>temp;
		a[temp]--;
	}
	for(i=0;i<10001;i++)
	{
		if(a[i]<0)
		cout<<i<<" ";
	}

return 0;
}

