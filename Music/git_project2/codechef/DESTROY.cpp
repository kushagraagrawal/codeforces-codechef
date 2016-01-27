#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		map<int,int> r;
		int n,a;
		cin>>n;
		int maxx = 0;
		for(int i=0;i<n;i++){
			cin>>a;
			r[a]++;
			if(r[a]>maxx)
				maxx = r[a];
		}		
		if(n - maxx>=maxx)
		cout<<n/2 + n%2<<endl;
		else
		cout<<n-maxx+(maxx-(n-maxx))<<endl;
	}
return 0;
}
