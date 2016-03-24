#include<bits/stdc++.h>
#define LL long long int
using namespace std;
const int c = 510;
LL a[c][c];
void compute()
{
	int i,j;
	for(i=0;i<c;i++)
	{
		a[i][0] = 1;
		for(j=1;j<=i;j++)
		a[i][j] = a[i-1][j] + a[i-1][j-1];
	}
}


int main()
{
	int N;
	cin>>N;
	compute();
	cout<<(a[N+2][3] * a[N+4][5])<<endl;
	return 0;
}
