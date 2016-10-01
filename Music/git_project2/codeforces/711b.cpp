#include <bits/stdc++.h>
using namespace std;

const long long MAXN=1e9;
const long long MOD=1e7+7;
const long long INF=1e18;

int main()
{
    /*
    freopen("std.in","r",stdin);
    freopen("std.out","w",stdout);
    */
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n,pos_x,pos_y,sum=0,answer=0;
    cin>>n;
    long long a[n][n],vertical[n],horizontal[n],diagonal1=0,diagonal2=0;
    for (int i=0;i<n;i++)
    {
        vertical[i]=0;
        horizontal[i]=0;
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if (!a[i][j])
            {
                pos_x=i;
                pos_y=j;
            }
            horizontal[i]+=a[i][j];
            vertical[j]+=a[i][j];
            if (i==j) diagonal1+=a[i][j];
            if (i+j==n-1) diagonal2+=a[i][j];
        }
    }
    if (n==1 && a[0][0]==0) {cout<<1; return 0;}
    
    sort(horizontal,horizontal+n);
    sort(vertical,vertical+n);
    
    if (horizontal[0]==horizontal[1]) {cout<<-1; return 0;}
    else {sum=horizontal[1];}
    
    answer=sum-horizontal[0];
    
    horizontal[0]+=answer;
    vertical[0]+=answer;
    
    if (pos_x==pos_y) diagonal1+=answer;
    if (pos_x+pos_y==n-1) diagonal2+=answer;
        
    for (int i=0;i<n;i++)
    {
        if (horizontal[i]!=sum) {cout<<-1; return 0;}
        if (vertical[i]!=sum) {cout<<-1; return 0;}
    }
    if (diagonal1!=sum) {cout<<-1; return 0;}
    if (diagonal2!=sum) {cout<<-1; return 0;}
    cout<<answer;
    return 0;
}
