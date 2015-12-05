/*#include<bits/stdc++.h>
using namespace std;
int N = 501;
vector <pair <int,int> >num[501];
pair<int,int> crd;
int n;
void solve(){
	scanf("%d",&n);
	int i,j,k=0;
	int x;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		scanf("%d",&x);
		crd.first = i;
		crd.second = j;
		num[x].push_back(crd);
	}
	int ans;
	for (i=2;i<=n*n;i++)
	{
		ans += abs(num[i].first - num[i-1].first) + abs(num[i].second - num[i-1].second);
		
	} 
	printf("%d",ans);
	
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		solve();
		
	}
return 0;
}*/
#include<cstdio>
#include<cmath>
using namespace std;
const int N = 505;
int num[N*N][2];
int n;
void solve() {
    scanf("%d", &n);
    int x;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) {
            scanf("%d", &x);
            num[x][0] = i;
            num[x][1] = j;
        }
    int ans = 0;
    for(int i=2; i<=n*n; i++)
        ans += abs(num[i][0] - num[i-1][0]) + abs(num[i][1] - num[i-1][1]);
    printf("%d\n", ans);
}
int main(void) {
    int cas;
    scanf("%d", &cas);
    while(cas--)
        solve();
	return 0;
}
