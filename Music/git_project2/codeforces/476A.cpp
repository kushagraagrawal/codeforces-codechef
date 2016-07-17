#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	if(n<m)
		cout<<"-1"<<endl;
	else{
		int mina = n/2 + n%2;
			cout<< m * ((mina / m) + (mina % m > 0));
	}
return 0;
}
