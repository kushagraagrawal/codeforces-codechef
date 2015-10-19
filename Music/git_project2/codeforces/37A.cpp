#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int N,i=0;
	int a[1000],b[1001] = {0} ;
	long int sum=0;
	cin>>N;
	while(N--)
	{
		cin>>a[i];
		
		b[a[i]]++;
		i++;
	}
	cout<<*max_element(b,b+1001);
	for(i=0;i<1001;i++)
	{
		//cout<<b[i]<<" ";
		if(b[i]>0)
		sum++;
	}	
	cout<<" "<<sum;
	return 0;
}
