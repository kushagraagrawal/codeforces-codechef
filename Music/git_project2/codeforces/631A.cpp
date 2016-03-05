#include<bits/stdc++.h>
using namespace std;
long long int fa[1003][1003],fb[1003][1003],a[1003],b[1003];
int main()
{
	int i,N;
	cin>>N;
	for(i=1;i<=N;i++)
	cin>>a[i];
	for(i=1;i<=N;i++)
	cin>>b[i];
	for(i=1;i<=N;i++)
	{
	    fa[i][i]=a[i];
        fb[i][i]=b[i];
        for(int j=i+1;j<=N;j++)
        {
            fa[i][j]=(fa[i][j-1]|a[j]);
            fb[i][j]=(fb[i][j-1]|b[j]);
        }
    }
	long long int ans = 0;
	    for(int i=1;i<=N;i++)
    {
	    for(int j=i;j<=N;j++)
        {
            ans=max(ans,fa[i][j]+fb[i][j]);
        }
    }
    cout<<ans<<"\n";
    return 0;
	
}
