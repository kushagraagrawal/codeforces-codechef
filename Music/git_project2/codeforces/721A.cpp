#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,n,j=0;
	cin>>n;
	string s;
	cin>>s;
	int ans[100] = {0};
	int count1 = 0,count2 = 0;
	for(i=0;i<n;i++){
		if(s[i]=='B')
			count1++;
		else if(s[i]=='W'){
			ans[j]=count1;
			count1=0;
			count2++;
			//cout<<ans[j]<<endl;
			j++;
			
		}
		
	}
	ans[j] = count1;
	count2=0;
	for(i=0;i<100;i++){
		if(ans[i]>0)
			count2++;
	}
	cout<<count2<<endl;
	for(i=0;i<100;i++){
		if(ans[i]>0)
			cout<<ans[i]<<" ";
	}
return 0;
}
