#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[1001];
ll a1[1001];
ll b[1001];
char s[101];
void swap_12(char *str1, char *str2)
{
  char *temp = str1;
  str1 = str2;
  str2 = temp;
}
int main()
{
    cin.sync_with_stdio(false);
    ll t,n,m,i,j,s1,s2;
    char c[1000][101];
    int flag;
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>a1[i]>>b[i];
            cin>>s;
            strcpy(c[i],s);
        }
        for(i=0;i<m-1;i++)
        {
            for(j=0;j<(m-i-1);j++)
            {
                if(b[j]<b[j+1])
                {
                   s1=b[j];
                   s2=a1[j];
 
                   b[j]=b[j+1];
                   a1[j]=a1[j+1];
 
                   b[j+1]=s1;
                   a1[j+1]=s2;
                   swap(c[j],c[j+1]);
                }
            }
        }
        for(i=0;i<m;i++)
        {
            flag=0;
            for(j=0;j<n;j++)
            {
                if(a1[i]==a[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
 
                cout<<c[i]<<"\n";
                b[i]=0;
            }
        }
        for(i=0;i<m;i++)
        {
            if(b[i]!=0)
            {
                cout<<c[i]<<"\n";
            }
        }
 
}
