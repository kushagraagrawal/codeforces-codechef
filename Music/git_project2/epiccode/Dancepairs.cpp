#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int i,j,N,K,count=0;
	long long int a[100000],b[100000];
	cin>>N>>K;
	for(i=0;i<N;i++)
	cin>>a[i];
	for(i=0;i<N;i++)
	cin>>b[i];
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if((abs(a[i]-b[j])<=K)&&b[j]!=0)
			{
				count++;
				b[j] = 0;
				break;
			}
		}
	}
	cout<<count<<endl;
}
