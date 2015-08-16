#include<iostream>

using namespace std;
int main()
{
int a[4][4];

for(int i=0;i<4;i++)
{for(int j=0;j<4;j++)
{if(j<=i)
if((i+j)%2==0)
a[i][j]=1;
else
a[i][j]=0;
}
}
for(int k=0;k<4;k++)
{for(int l=0;l<4;l++)
{if(l<=k)
cout<<a[k][l];
}cout<<endl;
}
	return 0;
}
