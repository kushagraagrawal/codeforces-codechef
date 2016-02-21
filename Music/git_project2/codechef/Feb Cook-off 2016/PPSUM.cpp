#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	int D,N,temp,i;
	cin>>T;
	while(T--)
	{
		cin>>D>>N;
		temp = N;
		//temp = D*N;
		//cout<<(temp*(temp+1))/2<<endl;
		for(i=1;i<=D;i++)
		{
			temp = (temp*(temp + 1))/2;
		}
		cout<<temp<<endl;
	}
	return 0;
}
