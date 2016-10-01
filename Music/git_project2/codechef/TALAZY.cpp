#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,b,m;
		cin>>n>>b>>m;
		ll answer = 0;
		while(n){
			if(n%2==0){
				answer += (n/2)*m;
				n-= n/2;
				m*=2;
				//cout<<answer<<endl;
			}
			else{
				answer += ((n+1)/2)*m;
				n-=((n+1)/2);
				m*=2;
				//cout<<answer<<endl;
			}
			answer+=b;
		}
		cout<<answer - b<<endl;
	}
	return 0;
}
