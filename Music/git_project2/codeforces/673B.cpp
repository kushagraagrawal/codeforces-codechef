#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
const LL mod=1e9+7;
const double PI=acos(-1.0);
const int inf=0x3f3f3f3f;
const int N=1e5+5;
int n,m;
int x[100006],y[100006];
int vis[100006];
int main()
{
   scanf("%d%d",&n,&m);
   for(int i=1;i<=m;i++)
   {
       scanf("%d%d",&x[i],&y[i]);
   }
   int flag1=0,flag2=1e6+7,mmin,mmax;
   int s1=0,s2=0;
   for(int i=1;i<=m;i++)
   {
       mmin=min(x[i],y[i]);
       mmax=max(x[i],y[i]);
       if(mmin>=flag2||mmax<=flag1){cout<<"0"<<endl;return 0;}
       else
       {
           if(mmin>flag1)flag1=mmin;
           vis[mmin]=1;
           s1++;
           if(mmax<flag2)flag2=mmax;
           vis[mmax]=1;
           s2++;
       }
   }
   int num=0;
   int ans=0;
   for(int i=1;i<=n;i++)
   {
       if(!vis[i]&&i>flag1&&i<flag2)
       {
            num++;
       }
   }
   if(s1!=0&&s2!=0)
   printf("%d\n",num+1);
   else printf("%d\n",num-1);
    return 0;
}
