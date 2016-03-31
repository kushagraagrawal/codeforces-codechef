#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	int temp = (a+b)%n;
	if(temp<=0)
	temp += n;
	cout<<temp<<endl;
	return 0;
}
