#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,k,e,l;
	cout<<"enter the number of numbers";
	cin>>a;
	cin>>b>>c;
	int f[10],g[10];
	for(int i=0;i<10;i++)
	{
		d=b%10;
		b=b/10;
		f[i]=d;
		if (b==0)
		{k=(i+1);
		break;
		}
					}
	for (int j=0;j<10;j++)
	{
		e=a%10;
		a=a/10;
		g[j]=e;
		if (a==0)
		{l=(j+1);
		break;
		}
	}
	
	for (int h=0;h<(k/2);h++)
	for (int g=k;g<(k/2);g--)
	{
		f[h]=
	}	
	
	
	
}
