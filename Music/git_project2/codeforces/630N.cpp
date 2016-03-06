#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	double D = sqrt((b*b)-(4*a*c));
	double x1,x2;
	x1 = (-b + D)/(2.0*a);
	x2 = (-b - D)/(2.0*a);
	if(x1>x2)
	cout<<setprecision(9)<<x1<<endl<<setprecision(9)<<x2;
	else
	cout<<setprecision(9)<<x2<<endl<<setprecision(9)<<x1;
	return 0;
}
