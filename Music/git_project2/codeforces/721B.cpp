#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
ll n,a[111],k;
string s;
int main()
{
    cin>>n>>k;
    for(ll i=1;i<=n;i++)
        cin>>s,a[s.size()]++;
    cin>>s;
    for(ll i=1;i<=100;i++)
        a[i]+=a[i-1];
    cout<<a[ll(s.size())-1]/k*5+a[ll(s.size())-1]+1<<" "<<a[s.size()]+(a[s.size()]-1)/k*5;
}
