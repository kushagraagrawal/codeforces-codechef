#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n,b,d;
	cin>>n>>b>>d;
	ll i,x,count=0,temp=0;
	for(i=0;i<n;i++){
		cin>>x;
		if(x<=b){
			if(temp+x<=d)
				temp+=x;
			else{
				count++;
				temp=0;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
