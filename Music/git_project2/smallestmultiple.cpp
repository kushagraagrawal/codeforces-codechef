#include<bits/stdc++.h>
using namespace std;
long long int lcm (int,int);
int main()
{
	int T;
	cin>>T;
	int a[40],N,i,j=1;
	while(T--)
	{
		cin>>N;
		for(i = 1;i<=N;i++)
		{
			j= lcm (j,i);
		}
	cout<<j<<endl;
	}
return 0;
}
long long int lcm(int i,int j)
{
	static long long int common = 1;
	if (common % i == 0 && common % j == 0)
    {
        return common;
    }
    common++;
    lcm(i, j);
    return common;
}
