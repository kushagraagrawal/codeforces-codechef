#include<bits/stdc++.h>
using namespace std;
int ways(int N)
{
	if (N==1 || N==2)
	return 1;
	else if(N==3)
	return 2;
	else
	return ways(N-1) + ways(N-3);
}
int main()
{
	int T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		cout<<ways(N)<<endl;
		
	}
	return 0;
}
