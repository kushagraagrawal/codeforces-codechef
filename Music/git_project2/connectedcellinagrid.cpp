#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10][10]={0};
	int n,m,i,j,count=0;
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==1)
			{
				if((a[i-1][j]==1)||(a[i+1][j]==1)||(a[i][j-1]==1)||(a[i][j+1]==1)||(a[i-1][j-1]==1)||(a[i-1][j+1]==1)||(a[i+1][j-1]==1)||(a[i+1][j+1]==1))
				count++;
			}
		
		}
	}
	cout<<++count<<endl;
	return 0;

}
