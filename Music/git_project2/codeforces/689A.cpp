#include <vector>
#include <iostream>
#include <queue>
#include <cmath>
#include <map>
#include <cstring>
#include <algorithm>
#include <cstdio>

using namespace std;
#define Riep(n) for(int i=1;i<=n;i++)
#define Riop(n) for(int i=0;i<n;i++)
#define Rjep(n) for(int j=1;j<=n;j++)
#define Rjop(n) for(int j=0;j<n;j++)
#define mst(ss,b) memset(ss,b,sizeof(ss));
typedef  long long LL;
template<class T> void read(T&num) {
    char CH; bool F=false;
    for(CH=getchar();CH<'0'||CH>'9';F= CH=='-',CH=getchar());
    for(num=0;CH>='0'&&CH<='9';num=num*10+CH-'0',CH=getchar());
    F && (num=-num);
}
int stk[70], tp;
template<class T> inline void print(T p) {
    if(!p) { puts("0"); return; }
    while(p) stk[++ tp] = p%10, p/=10;
    while(tp) putchar(stk[tp--] + '0');
    putchar('\n');
}

const LL mod=1e9+7;
const double PI=acos(-1.0);
const LL inf=1e18;
const int N=1e5+10;
const int maxn=1005;
const double eps=1e-10;

int check(int x,int y)
{
 if(x>=1&&x<=3&&y<=3&&y>=1)return 1;
 if(x==4&&y==2)return 1;
 return 0;
}
int fx,fy,ax,ay;
void get_pos(int num)
{
    if(num==0)fx=4,fy=2;
    else
    {
        fx=ceil(num*1.0/3);
        fy=num%3;
        if(!fy)fy+=3;
    }
}
void solve(int num)
{
      if(num==0)ax=4,ay=2;
    else
    {
        ax=ceil(num*1.0/3);
        ay=num%3;
        if(!ay)ay+=3;
    }
}
int main()
{
    int n;
    char s[14];
    read(n);
    scanf("%s",s);

    for(int i=0;i<=9;i++)
    {
        if(s[0]-'0'==i)continue;
        get_pos(i);//fx/fy;
        solve(s[0]-'0');//ax,ay;
        int flag=1;
        int tx=ax-fx,ty=ay-fy;
        for(int j=1;j<n;j++)
        {
            solve(s[j]-'0');
            if(!check(ax-tx,ay-ty))flag=0;
        }
        if(flag)
            {cout<<"NO"<<endl;return 0;}
    }
         cout<<"YES"<<endl;
        return 0;
}
