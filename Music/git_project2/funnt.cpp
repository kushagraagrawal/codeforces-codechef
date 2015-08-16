#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
char a[10000];
int main()
{	int T;
cin>>T;
while(T--)
	{
	cin>>a;
	int l= strlen(a);
	int count=0;
	
	for(int i=1,j=l-2;i<l,j>=0;i++,j--)
	{
	
		if(abs (a[i]-a[i-1])==(abs(a[j+1]-a[j])))
		{		
		count++;
		}
		
	}
	if(count==(l-1))
	cout<<"Funny"<<endl;
	else 
	cout<<"Not Funny"<<endl;
	}
	return 0;
