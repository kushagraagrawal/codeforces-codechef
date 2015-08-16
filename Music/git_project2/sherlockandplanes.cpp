#include<bits/stdc++.h>
using namespace std;
int planar(int a[][]);
int main()
{
	int a[4][3];
	int T,i,j;
	cin>>T;
	while(T--)
	{
		for(i=0;i<4;i++)
		{
			for(j=0;j<3;j++)
			cin>>a[i][j];
		}
		for(i=1;i<4;i++)
		{
			for(j=0;j<3;j++)
			{
				a[i][j] = a[i][j] - a[0][j];
			}
		}
		if(planar(a))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
	}
return 0;
}
int planar(int a[][3])
{
	int b[3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(j!=i)
			{
			b[i] = 
		}
	}
}
