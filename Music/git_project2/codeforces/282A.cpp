#include<bits/stdc++.h>
#include<sstream>
#include<string>
using namespace std;
int main()
{
	int n,X=0;
	cin>>n;
	string a;
	
	while(n--)
	{
		int b[88] = {0};
		cin>>a;
		for (int i=0;i<3;i++)
		b['X' - a[i]]++;
		if(b[45]==2)
		X++;
		else
		X--;
		
	}
cout<<X;
return 0;
}
