#include<cstdio>
#include<cstring>
int n,k,b[100010],vis[100010];
__int64 sum,res;
int main()
{
    while(scanf("%d%d",&n,&k)!=EOF){
        sum=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&b[i]);
            sum+=b[i];
        }
        int dd;
        memset(vis,0,sizeof(vis));
        for(int i=0;i<k;i++){
            scanf("%d",&dd);
            vis[dd]=1;
        }
        res=0;
        for(int i=1;i<=n;i++){
            if(vis[i]){
                if(i==1){
                    res+=b[1]*(sum-b[n]-b[1]);
                    if(vis[n]){
                        res+=b[1]*b[n];
                    }
                }
                else{
                    res+=b[i]*(sum-b[i]-b[i-1]);
                    if(vis[i-1]){
                        res+=b[i]*b[i-1];
                    }
                }
                sum-=b[i];
            }
            else{
                if(i==n){
                    res+=b[1]*b[n];
                }
                else{
                    res+=b[i]*b[i+1];
                }
            }
        }
        printf("%I64d\n",res);
    }
    return 0;
}
