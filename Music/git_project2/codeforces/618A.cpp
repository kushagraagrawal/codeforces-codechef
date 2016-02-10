#include<bits/stdc++.h>
using namespace std;
int main(){
	long int a[100000] = {0};
	long int N,i;
	cin>>N;
	int n = 0;
	for(i=0;i<N;i++)
	{
		a[n] = 1;
		while(n && a[n]==a[n-1])
		{
			a[n-1]++;
			n--;
		}
		n++;
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
