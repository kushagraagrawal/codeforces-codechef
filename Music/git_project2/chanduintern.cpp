#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int N;
	long long int count=0,i,X,c;
	cin>>N;
	while(N--)
	{	count = 0;
		cin>>X;
		for(i=1;i<=sqrt(X);i++)
		{
			c = X%i;
			if (c==0&&X!=i*i)
			{
				count+=2;
			}
			else if(X==i*i)
			{
				count++;
			}
			if (count>=4)
			{cout<<"YES"<<endl;
			//cout<<count<<endl;
			break;
		}
		
		}
	if(count<4)
	cout<<"NO"<<endl;	
	}
return 0;
}
