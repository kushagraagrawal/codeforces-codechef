#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int T,A,B;
	cin>>T;
	while(T--)
	{
		cin>>A>>B;
		if (A>B)
		cout<<">"<<endl;
		else if(A==B)
		cout<<"="<<endl;
		else
		cout<<"<"<<endl;
	}
return 0;
}
