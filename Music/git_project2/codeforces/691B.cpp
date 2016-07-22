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
const int N=2e5+10;
const int maxn=1005;
const double eps=1e-10;


char s[1010],str[1010];

int check(char x ,char y)
{
  if(x=='A'&&y=='A')return 1;
  if(x=='I'&&y=='I')return 1;
  if(x=='M'&&y=='M')return 1;
  if(x=='O'&&y=='O')return 1;
  if(x=='T'&&y=='T')return 1;
  if(x=='H'&&y=='H')return 1;
  if(x=='U'&&y=='U')return 1;
  if(x=='W'&&y=='W')return 1;
  if(x=='X'&&y=='X')return 1;
  if(x=='Y'&&y=='Y')return 1;
  if(x=='V'&&y=='V')return 1;
  if(x=='x'&&y=='x')return 1;
  if(x=='w'&&y=='w')return 1;
  if(x=='o'&&y=='o')return 1;
  if(x=='v'&&y=='v')return 1;
  //if(x=='m'&&y=='m')return 1;
  //if(x=='n'&&y=='n')return 1;
//  if(x=='i'&&y=='i')return 1;
  if(x=='p'&&y=='q')return 1;
  if(x=='q'&&y=='p')return 1;
  if(x=='b'&&y=='d')return 1;
  if(x=='d'&&y=='b')return 1;
  return 0;
}
int main()
{
          scanf("%s",s);
      int len=strlen(s);
      For(i,0,len-1)
      {
        str[len-i-1]=s[i];
      }
      For(i,0,len-1)
      {
        if(!check(s[i],str[i]))
        {
          //  cout<<s[i]<<" "<<str[i]<<endl;
          cout<<"NIE";
          return 0;
        }
      }
      cout<<"TAK";
        return 0;
}
