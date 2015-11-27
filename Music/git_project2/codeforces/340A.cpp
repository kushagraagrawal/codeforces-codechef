#include<bits/stdc++.h>
using namespace std;
long long int GCD(long long int x,long long int y)
{
	if ((x>=y)&&((x%y)==0))
		return y;
	else
		GCD(y,(x%y));

}
int main()
{
	//int ;
	long long int x,y,temp,temp2,a,b;
	cin>>x>>y;
	cin>>a>>b;
	temp = (x*y)/GCD(x,y);
	temp2 = b/temp - (a-1)/temp;
	//cout<<temp2;
	cout<<temp2;
	return 0;
}
