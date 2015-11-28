/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int y,k,n,x;
	cin>>y>>k>>n;
	x = y%k;
	x = (k - x)%k;
	if (x + y> n)
	cout<<"-1"<<endl;
	else
	{
		while(x + y<=n)
		{
			cout<<x;
			x += k;
		}
	}
return 0;
}*/
#include <cstdio>

int main(){

    long y, k, n; scanf("%ld %ld %ld", &y, &k, &n);
    long a = (y % k); a = (k - a) % k;
    if(a == 0){a = k;}
    if(y + a > n){puts("-1");}
    else{while(y + a <= n){printf("%ld ", a); a += k;}}

    return 0;
}
