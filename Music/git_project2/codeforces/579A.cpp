#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j,temp=2;
	cin>>n;
	if (n)	
	cout<<"1"<<endl;
 
 else{
 	temp=1;
	for(i=2;i<=n;i++)
	{
		temp += (i/i) + (2*(i-1));
	//	cout<<i<<endl;
		if(temp == n)
		{
			cout<<i<<endl;
			break;
		}
	}
}
	
return 0;
}
