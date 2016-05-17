#include<bits/stdc++.h>
using namespace std;
const int maxm = 1E5*2 + 10;
int a[maxm],b[maxm];
map<int,int> qm;
int main()
{
	int n,tmp,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>tmp;
		if(qm.find(tmp)==qm.end()){
		qm[tmp] = 1;
                }else ++qm[tmp];
        }
        scanf("%d",&m);
        for(int i = 0 ; i < m ; ++i){
                scanf("%d",&a[i]);
        }
        for(int i = 0 ; i < m ; ++i){
                scanf("%d",&b[i]);
        }
        int ans;
        pair<int,int> cnt,cur;
        cnt.first = cnt.second = -1;
        for(int i = 0; i < m ; ++i){
                cur = pair<int,int>(qm[a[i]],qm[b[i]]);
                if( cnt < cur ){
                        cnt = cur;
                        ans = i;
                }
        }
        printf("%d\n",ans + 1);
        return 0;
}
