#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int r;
	float x,y,x1,y1;
	cin>>r>>x>>y>>x1>>y1;
	double d;
	d = sqrt(pow(y1 - y,2) + pow(x1 - x,2));
	cout<<ceil(d/(2*r));
	return 0;
}
