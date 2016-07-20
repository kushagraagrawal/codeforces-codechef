#include<bits/stdc++.h>
using namespace std;
int visited[1005][1005],x[2000],y[2000];
string str[2000];
int main()
{
    int i,j,k,l,m,n,my=0,mx=0,ax=0,ay=0,cnt=0,sum;
    cin>>n>>m;
    for(i=0;i<n;i++)cin>>str[i];
   for(i=0;i<n;i++){
        sum=0;
   for(j=0;j<m;j++){
    if(str[i][j]=='*'){
            sum++;
    cnt++;
    }
   }
   x[i]=sum;
   }
    for(j=0;j<m;j++){
        sum=0;
   for(i=0;i<n;i++){
    if(str[i][j]=='*')sum++;
   }
   y[j]=sum;
   }
   for(i=0;i<n;i++){
    for(j=0;j<m;j++){
            sum=x[i]+y[j];
    if(str[i][j]=='*')sum--;
        if(sum==cnt){
            printf("YES\n");
            printf("%d %d\n",i+1,j+1);
            return 0;
        }
    }
   }
   printf("NO\n");
}
