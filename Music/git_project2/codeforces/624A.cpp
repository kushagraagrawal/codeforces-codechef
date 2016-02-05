#include<bits/stdc++.h>
using namespace std;
int main()
{
	int d,L,v1,v2;
	cin>>d>>L>>v1>>v2;
	float temp = L - d,temp2 = v1 + v2;
	cout<<setprecision(8)<<temp/temp2<<endl;	
	return 0;
	
}
