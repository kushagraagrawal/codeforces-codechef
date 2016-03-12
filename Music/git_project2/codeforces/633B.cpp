#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m;
	cin>>m;
	int num,x,sum=0;
	for(int i=1;i<=100000;i++)
	{
		num=1;
		x=i;
		while(1)
		{
			if(x%5==0){
			
			num++;
			x = x/5;
		}
		
		else 
		break;
	}
	sum+=num;
	if(sum==m)
	{
		cout<<"5"<<"\n";
		for(int j=5*i;j<5*i + 5;j++)
		{
			cout<<j<<" ";
		}
		return 0;
	}
	else if(sum>m)
	{
		break;
	}
	}
	cout<<"0";
	return 0;
}
