#include <bits/stdc++.h>
using namespace std;

long long n,k,a,b,c,d,x,y,i=1;

int main(){
	cin>>n>>a>>b>>c>>d;
	
	while(i<=n){
		if(i+b-c>=1&&i+b-c<=n&&i+a-d>=1&&i+a-d<=n&&i+a+b-d-c>=1&&i+a+b-d-c<=n){k++;}
		i++;
	}
	cout<<n*k;
return 0;
}
