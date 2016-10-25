#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,r,i=1;
	cin>>k>>r;
	while(i){
		if((k*i)%10==r || (k*i)%10==0){
			cout<<i;
			break;
		}
		else
			i++;
	}
	return 0;
}
