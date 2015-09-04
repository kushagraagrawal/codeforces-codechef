#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b;
	long long int count=0;
	cin>>a>>b;
	while (a>0 && b>0)
	{
		if (a>b)
		{             
			a = a-b;
			count++;
		}
		else if(b>a) 
		{
		b = b - a;
		count++;}
		else
		{
		count++;
		break;
	}
	}
	cout<<count<<endl;
	return 0;
}
