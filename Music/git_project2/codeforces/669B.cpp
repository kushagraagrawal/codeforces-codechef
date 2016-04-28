#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
const ll inf=1e15;
const int N=1e5+6;
int n,a[N],vis[N];
char s[N];
int main()
{
    memset(vis,0,sizeof(vis));
    scanf("%d",&n);
    scanf("%s",s+1);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int pos=1;
    vis[1]=1;
    while(1)
    {
        if(s[pos]=='>')
        {
            if(pos+a[pos]>n)
            {
                printf("FINITE\n");
                return 0;
            }
            else
            {
                if(vis[pos+a[pos]])
                {
                    printf("INFINITE\n");
                    return 0;
                }
                else
                {
                    pos+=a[pos];
                    vis[pos]=1;
                }
            }
        }
        else
        {

            if(pos-a[pos]<1)
            {
                printf("FINITE\n");
                return 0;
            }
            else
            {
                if(vis[pos-a[pos]])
                {
                    printf("INFINITE\n");
                    return 0;
                }
                else
                {
                    pos-=a[pos];
                    vis[pos]=1;
                }
            }

        }
    }

    return 0;
}
