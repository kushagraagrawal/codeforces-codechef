#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a;
	int b;
	int e,g;
	int count=0;
	int c=0,d=0;
	cout<<"enter a number"<<endl;
	cin>>a;
	b=a;
	do
	{	c=b%10; // 79%10=9 
	b=b/10;
		count +=1;
	
	}while(c);
	e=a;
	cout<<(count-1)<<endl;
	int l=(count-1);
	int f[l];
	for(int i=0;i<l;i++)
	{ g=e%10;
	  e=e/10;
	  f[i]=g;
		}
	int sum=0,count1=l;
	cout<<count1<<endl;
	for(int k=0;k<l;k++)
	{cout<<f[k];
	}
	cout<<endl;
	for (int j=0;j<l;j++)
	{
		sum += f[j]*pow(10,(count1-1));
		 count1--;
	}	 
	cout<<sum;
	
	 
	
	return 0;
}
