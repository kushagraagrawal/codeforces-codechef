#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main()
{
	LL C = 360,T=44;
	LL ang;
	cin>>ang;
	ang = ((ang%C)+C)%C;
	ang = (ang+T)%C;
	cout<<((ang%(C-1))/(C/4))<<endl;
	return 0;
}
