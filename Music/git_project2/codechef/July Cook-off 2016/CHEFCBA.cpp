#include<bits/stdc++.h>
using namespace std;
int main(){
	float a[4];
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	sort(a,a+4);
	if((a[1]/a[0])==(a[3]/a[2]))
		cout<<"Possible";
	else
		cout<<"Impossible";
	return 0;
}
