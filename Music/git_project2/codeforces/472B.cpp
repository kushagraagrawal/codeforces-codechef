#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int n,k,i,a[2000],j;
	long int count = 0;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=n-1;i>=0;i -= k){
		count += 2*(a[i] - 1);
	}
	cout<<count<<endl;
	return 0;
}
