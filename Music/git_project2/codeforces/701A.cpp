#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,n;
	cin>>n;
	int a[n],b[n];
	vector< pair<int,int> >ans;
	for(i=1;i<=n;i++){
	
		cin>>a[i];
		ans.push_back(make_pair(a[i],i));
	}
	sort(ans.begin(),ans.end());
	
	for(i=0;i<n/2;i++)
	{
		cout<<ans[i].second<<" "<<ans[n-i-1].second<<endl;
		//cout<<ans[i].second<<" "<<ans[n-i].second<<endl;	
	}	
return 0;
}
