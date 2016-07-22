#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
#define For(i,j,n) for(int i=j;i<=n;i++)
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
 
//const LL mod=1e9+7;
const double PI=acos(-1.0);
const LL inf=1e18;
const int N=1e6+10;
const int maxn=1005;
const double eps=1e-10;
 
 
char s[N],ans[N];
 
int main()
{
      scanf("%s",s);
 
      int len=strlen(s),pos=len,lastpos,cnt;
      For(i,0,len-1)
      {
        if(s[i]=='.')
        {
          pos=i;
          break;
        }
      }
      //if(s[0]=='.')pos=0;
      For(i,0,len-1)
      {
        if(s[i]>'0'&&s[i]<='9')
        {
          ans[0]=s[i];
          ans[1]='.';
          lastpos=i+1;
          cnt=1;
          for(int j=i+1;j<len;j++)
          {
            if(s[j]>='0'&&s[j]<='9')ans[++cnt]=s[j];
          }
          break;
        }
      }
      for(int i=cnt ;i>=1;i--)
      {
        if(ans[i]=='0'||ans[i]=='.')cnt--;
        else break;
      }
      for(int i=0;i<=cnt;i++)
      {
        printf("%c",ans[i]);
      }
      if(pos!=lastpos)
      {
        if(pos>lastpos)
        {
          printf("E%d",pos-lastpos);
        }
        else
        {
          printf("E%d",pos-lastpos+1);
        }
      }
      printf("\n");
        return 0;
}
