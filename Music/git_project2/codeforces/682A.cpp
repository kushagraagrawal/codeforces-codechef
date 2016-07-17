#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main(){
	LL i,a,b;
	cin>>a>>b;
	LL counta[5]={0},countb[5]={0};
	for(i=1;i<=a;i++)
	{
		counta[i%5]++;
	}
	for(i=1;i<=b;i++)
	{
		countb[i%5]++;
	}
	cout<<(counta[1]*countb[4]) + (counta[2]*countb[3]) + (counta[3]*countb[2]) + (counta[4]*countb[1]) + (counta[0]*countb[0]);
	return 0;	
}
