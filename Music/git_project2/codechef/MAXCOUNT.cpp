#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,N;
	long int i,A[100],temp;
	cin>>T;
	while(T--)
	{
		long int b[10001] = {0};
		cin>>N;
		for(i=0;i<N;i++)
		{
			cin>>A[i];
			b[A[i]]++;
		}
		temp = *max_element(b,b+10001);
		for(i=0;i<10001;i++)
		{
			if(temp==b[i])
			{
				cout<<i<<" "<<temp<<endl;
				break;
			}
		}
	}
	return 0;
}
