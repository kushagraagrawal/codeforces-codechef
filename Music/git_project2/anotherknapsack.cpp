#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int N,M,count = 0;
	cin>>N>>M;
	if (N>=M)
		cout<<"1";
    else if (N<=sqrt(M))
        cout<<"-1";
	else if (N<M)
	{
		long long int x = N - 1;
		long long int diff = M - N;
		if (M- N >=0)
			count = 1;
		while (x>0)
		{
			if(diff >=N-1)
			{
				diff -= x;
				count++;
			}
			else if (diff<N-1)
			{
				count++;
				break;
			}
			x--;
		}
		if (count ==0)
		cout<<"-1";
		else
		cout<<count;
	}
}
