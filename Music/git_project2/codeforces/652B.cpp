#include<bits/stdc++.h>
#define LL long long int
using namespace std;
const int maxn = 1010;
int a[maxn],b[maxn];
int main()
{
	int n,i;
	cin>>n;
	//vector<LL> a(N);
	
	for(i=1;i<=n;i++)
	cin>>a[i];
	sort(a+1,a+1+n);
	int st1 = 1, st2 = (n+1)/2 + 1;
	int tot = 0;
	while(1){
		++tot;
		if(tot%2==1) b[tot] = a[st1++];
		else b[tot] = a[st2++];
		if(tot==n)
		break;
	}
	for(i=1;i<=n;i++)
	cout<<b[i]<<" ";
	return 0;
}
