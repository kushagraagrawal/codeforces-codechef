#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,count=0;
	cin>>n>>k;
	vector<int>a(n),b(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n-1;i++)
		b[i] = a[i] + a[i+1];
	for(int i=1;i<n;i++){
		if(b[i-1] < k){
			a[i] += k - b[i-1];
			count += k - b[i-1];
			b[i-1] = a[i-1] + a[i];
			b[i] = a[i] + a[i+1];
		}
	}
	cout<<count<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
return 0;
}
