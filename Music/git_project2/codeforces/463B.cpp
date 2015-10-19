#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	long long int i,n,a[100000];
	cin>>n;
	for (i=0;i<n;i++)
	cin>>a[i];
	cout<<*max_element(a,a+n);
}
