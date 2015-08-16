#include<iostream>
using namespace std;
int main()
{
	int a,c=0;
	cout<<"enter the number to be tested"<<endl;
	cin>>a;
	int big;
	big= a%10;
	int b=a;
	while(b)
	{ c=b%10;
	if(c>=big)
	big=c;
	b=b/10;
	}
	cout<<"the biggest digit in"<<a<<" is"<<big<<endl;
	return 0;
	
}
