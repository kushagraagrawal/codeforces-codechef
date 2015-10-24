#include<bits/stdc++.h>
using namespace std;
int main(){
/*	int S;
	long long int a,b,c;
	cin>>a>>b>>c;
*/
	int n,m;
	cin>>n>>m;
	cout << n + m - 1 << endl;
    for (int i = 1; i <= m; ++i)
    {
        cout << "1 " << i << endl;
    }
    for (int i = 2; i <= n; ++i)
    {
        cout << i << " 1" << endl;
    }
	return 0;
}
