#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int a,b,c,d,e,f;
	cin>>a>>b>>c;
	bool p = 0;
	for (d = 0;d<=a;d++){
		if(d<=b && d>= a - c && b - d == c - (a - d)){
			p = 1;
			cout<<d<<" "<<b - d<<" "<<a - d;
			break;
		}
	}
	if(!p)
	cout<<"Impossible";
	return 0;

}

