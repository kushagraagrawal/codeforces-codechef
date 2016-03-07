#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2;
	cin>>a1>>a2;
	int count = 0;
	if(a1 <2 && a2<2)
	cout<<"0";
	else
	{
	while(a1>0 && a2>0)
	{
		
		if(a1>=a2)
		{
		a1-=2;
		a2 ++;
		count++;
		}
		else{
			a1 ++;
			a2-=2;
			count++;
		}
	}	
	cout<<count<<endl;
	}
	return 0;
}
