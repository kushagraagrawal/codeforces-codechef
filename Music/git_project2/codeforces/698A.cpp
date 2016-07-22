#include<bits/stdc++.h>
using namespace std;
int a[105],dp[105][3];
// 1 is rest and 0 is not
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	memset(dp,0x3f,sizeof(dp));
	if(a[1]==0)
		dp[1][0] = 1;
	else if(a[1]==1)
		dp[1][1]=0;
	else if(a[1]==2)
		dp[1][2]=0;
	else if(a[1]==3){
		dp[1][1]=0;
		dp[1][2]=0;
	}
	for(int i=2;i<=n;i++){
		if(a[i]==0){
			dp[i][0] = min(dp[i][0],min(dp[i-1][2],min(dp[i-1][1],dp[i-1][0]))+1);
		}
	else if(a[i]==1)  
     {  
        dp[i][1]=min(dp[i][1],min(dp[i-1][2],dp[i-1][0]));  
        dp[i][0]=min(dp[i][0],min(dp[i-1][2],min(dp[i-1][1],dp[i-1][0]))+1);  
     }  
     else if(a[i]==2)  
     {  
        dp[i][2]=min(dp[i][2],min(dp[i-1][1],dp[i-1][0]));  
        dp[i][0]=min(dp[i][0],min(dp[i-1][2],min(dp[i-1][1],dp[i-1][0]))+1);  
     }  
     else{	  
        dp[i][1]=min(dp[i][1],min(dp[i-1][0],dp[i-1][2]));  
        dp[i][2]=min(dp[i][2],min(dp[i-1][0],dp[i-1][1]));  
    	}  
  	}  
  	int res;
  if(a[n]==0)  
    res=dp[n][0];  
  else if(a[n]==1)  
    res=min(dp[n][1],dp[n][0]);  
  else if(a[n]==2)  
    res=min(dp[n][2],dp[n][0]);  
  else  
    res=min(dp[n][0],min(dp[n][1],dp[n][2]));  
	cout<<res<<endl;
	return 0;
	
}
