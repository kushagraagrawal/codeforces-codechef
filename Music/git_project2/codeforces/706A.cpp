#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	int n,x,y,v;
	cin>>a>>b;
	cin>>n;
	cin>>x>>y>>v;
	float distancex = (x-a)*(x-a);
		float distancey = (y-b)*(y-b);
		float distance = sqrt(distancex + distancey);
		float time = distance/(float)v;
		float min = time;
		n=n-1;
	while(n--){
		cin>>x>>y>>v;
		float distancex = (x-a)*(x-a);
		float distancey = (y-b)*(y-b);
		float distance = sqrt(distancex + distancey);
		float time = distance/(float)v;
		if(time<min)
		min = time;
	}
	cout.precision(10);
	cout<<min;
	return 0;
}
