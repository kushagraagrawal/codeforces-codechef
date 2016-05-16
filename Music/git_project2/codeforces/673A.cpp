#include <bits/stdc++.h>
using namespace std;
#define Riep(n) for(int i=1;i<=n;i++)
#define Riop(n) for(int i=0;i<n;i++)
#define Rjep(n) for(int j=1;j<=n;j++)
#define Rjop(n) for(int j=0;j<n;j++)
#define mst(ss,b) memset(ss,b,sizeof(ss));
typedef long long LL;
const LL mod=1e9+7;
const double PI=acos(-1.0);
const int inf=0x3f3f3f3f;
const int N=1e5+5;
int n,a[200];
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]-a[i-1]>15)
        {
            cout<<a[i-1]+15<<endl;
            return 0;
        }
    }
    cout<<min(90,a[n]+15)<<endl;

    return 0;
}
