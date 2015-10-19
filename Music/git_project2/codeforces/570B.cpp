#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,m;
	cin>>n>>m;
	if (n < 2) {
    cout<<"1"<<endl;
  } else if (m - 1 < n - m) {
    cout<<m+1;
  } else {
    cout<<m-1;
  }
	return 0;
}
