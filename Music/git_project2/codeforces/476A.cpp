#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,temp;
	cin>>n>>m;
	if (n<m)
	cout<<"-1"<<endl;
	else
	{
		temp = n/2;
		if(temp%m==0)
		{
			cout<<temp<<endl;
		}
		else
		{
			temp = temp - (temp%m);
			n -= temp*2;
			cout<<temp + n;
		}
	
	
	}
return 0;
}
