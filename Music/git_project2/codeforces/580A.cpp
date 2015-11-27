#include<iostream>
using namespace std;
int main()
{
	long max_len=1,len=1,n,i;
	cin>>n;
	long arr[n];
	for(i=0;i<n;++i)
	{
		cin>>arr[i];
		if(i == 0)
			continue;
		if(arr[i] < arr[i-1])
			len = 1;
		else
			len++;
		if(len > max_len)
			max_len = len;
	}
	cout<<max_len<<endl;
	return 0;
}
