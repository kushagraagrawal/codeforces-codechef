#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a[2] = {0};
	cin>>n;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a[x]++;
	}
	if(n==1)
	{
		if(a[0]==1)
			cout<<"NO";
		else cout<<"YES";
	}
	else if(a[0] != 1)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;
}
