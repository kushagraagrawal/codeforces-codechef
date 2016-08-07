#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int countm=0,countc=0;
	cin>>n;
	while(n--){
		int c,m;
		cin>>m>>c;
		if (m>c)
			countm++;
		else if(c>m)
			countc++;
	}
	if(countm>countc)
		cout<<"Mishka";
	else if(countc>countm)
		cout<<"Chris";
	else
		cout<<"Friendship is magic!^^";
	return 0;
}
