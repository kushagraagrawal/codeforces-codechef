#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h,temp;
	long long int sum=0;
	cin>>n>>h;
	for(int i =0;i<n;i++)
	{
		cin>>temp;
		if(temp<=h)
		sum++;
		else
		sum+=2;
	}
	cout<<sum<<endl;
	return 0;
}
