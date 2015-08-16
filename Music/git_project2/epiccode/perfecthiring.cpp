#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a[100000];
	long long int temp,i,N,P,X,max=0;
	cin>>N>>P>>X;
	for(i=0;i<N;i++)
	{
		cin>>a[i];
		a[i] = a[i] * P;
		P = P-X;
		//cout<<a[i]<<endl;
		if (a[i]>max)
		{
		max = a[i];
		temp = i;
		}
	}
	//cout<<max;
	cout<<temp+1;
	return 0;
}
