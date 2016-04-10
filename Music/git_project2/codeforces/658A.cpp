#include <bits/stdc++.h>
using namespace std;
int n,c;
int p[60],t[60];
int main()
{
    scanf("%d%d",&n,&c);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&t[i]);
    }
    int x=0,y=0,ti=0,te=0;
    for(int i=1;i<=n;i++)
    {
        ti+=t[i];
        x+=max(0,p[i]-c*ti);
    }
    for(int i=n;i>0;i--)
    {
        te+=t[i];
        y+=max(0,p[i]-c*te);
    }
    if(x>y)cout<<"Limak"<<"\n";
    else if(x<y)cout<<"Radewoosh"<<"\n";
    else cout<<"Tie"<<"\n";

    return 0;
}
