#include<bits/stdc++.h>
using namespace std;
int s[110][110];
int main()
{
    int t,n,m,a,b,i,j,k;
    while(scanf("%d%d%d",&n,&a,&b)!=EOF)
    {
        if(a*b<n)
        {
            printf("-1\n");
            continue;
        }
        memset(s,0,sizeof(s));
        i=1;j=1;k=1;
        for(i=1;i<=a;i++)
        {
             
            if(i&1)
                 for(j=1;j<=b;j++)
                 {
                    if(k>n) break;
                    s[i][j]=k++;
                 }         
            else
                for(j=b;j>=1;j--)
                {
                    if(k>n) break;
                    s[i][j]=k++;
                }       
            if(k>n) break;
        }
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=b;j++)
                printf("%d ",s[i][j]);
            printf("\n");
        }   
    }
    return 0;
}

