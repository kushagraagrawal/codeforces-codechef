#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m,c;
	cin>>t;
	while(t--){
		cin>>n>>m>>c;
		int count=0;
		for(int i=1;i<=c;i++){
			if(c%i==0){
				int temp=c/i;
				if((temp<=n && i<=m)){
					//cout<<i<<" "<<temp<<endl;
					count++;
				}
			}
		
		}
		cout<<count<<endl;
		
	}
return 0;
}
