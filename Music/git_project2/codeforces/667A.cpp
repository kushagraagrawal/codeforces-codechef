#include<bits/stdc++.h>
#define PI 3.14159265
#define LL long long int
using namespace std;
int main()
{
	LL d,h,v,e;
	cin>>d>>h>>v>>e;
	float temp = (PI*e*d*d)/4.0;
	float temp2 = (v*4)/(PI*d*d);
	if(e>temp2)
	cout<<"NO";
	else
	{
		cout<<"YES"<<endl;
		float init = (PI*h*d*d)/4.0;
		float ans = init/(temp - v);
		cout<<setprecision(9)<<abs(ans);
		
		
		
		
		
		
	}
return 0;
}
