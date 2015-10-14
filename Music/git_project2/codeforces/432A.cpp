#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,temp,count=0;
	int max = 5;
	int members = 3;
	cin>>n>>k;
	int allowed = max - k;
	for (int p=0;p<n;p++){
		cin>>temp;
		count += (temp<=allowed);
		
	}
cout<<count/members;
return 0;

}
