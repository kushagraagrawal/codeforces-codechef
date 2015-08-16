#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],c[3][3];
	for(int i=0;i<3;i++)
	{for(int j=0;j<3;j++)
	{cin>>a[i][j];
	}
	}
	for(int k=0;k<3;k++)
	{for(int l=0;l<3;l++)
	{cin>>b[k][l];
	}
			}
	
	for(int m=0;m<3;m++)
	{for(int n=0;n<3;n++)
	{c[m][n]=0;
	for(int o=0;o<3;o++)
	{
	c[m][n]+=a[m][o]*b[o][n];
	}}
	}

for(int p=0;p<3;p++)
{for(int q=0;q<3;q++)
{cout<<c[p][q]<<" ";
}
cout<<"\n";}	
return 0;

}
