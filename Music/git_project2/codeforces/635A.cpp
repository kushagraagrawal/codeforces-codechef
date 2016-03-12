#include<stdio.h>
#include<iostream>  
#include<string.h>  
#include<algorithm>  
using namespace std;  
int map[100][100];  
int an[100][100];  
int ans[100][100];  
int main()  
{  
    int r,c,n,k;  
   cin>>r>>c>>n>>k;
    
        memset(map,0,sizeof(map));  
        int i,j;  
        for(i=0;i<n;i++)  
        {  
            int x,y;  
            scanf("%d%d",&x,&y);  
            map[x][y]=1;  
        }   
        //int ans=0;  
        int xx,oo;  
        for(i=1;i<=r;i++)  
        {  
            for(j=1;j<=c;j++)  
            {  
                ans[i][j]=map[i][j]+ans[i][j-1];  
            }  
        }  
        int wc=0;  
        for(i=1;i<=r;i++)  
        {  
            for(j=1;j<=c;j++)  
            {  
                ans[i][j]+=ans[i-1][j];  
            }  
        }  
    //  int xx,oo;  
        for(i=1;i<=r;i++)  
        {  
            for(j=1;j<=c;j++)  
            {  
                for(xx=i;xx<=r;xx++)  
                {  
                    for(oo=j;oo<=c;oo++)  
                    {  
                        int ji=ans[xx][oo]+ans[i-1][j-1]-ans[i-1][oo]-ans[xx][j-1];  
                        if(ji>=k)  
                        wc++;  
                    }  
                }  
            }  
        }  
        printf("%d\n",wc);  
    
    return 0;  
}   
