#include<iostream>
using namespace std;
int sum (int e)
{int sum1=0;
int f=0;
int g=e;
do
{ f=g%10;
sum1 +=f;
g=g/10;
}while(f);
return sum1;
}

int reversesum(int h)
{
}
int main()
{
int a,b,c;
cout<<"enter a number"<<endl;
cin>>a;
b=sum(a);
c=reversesum(b);
d=product(b,c);
if (a==d)
cout<<a<<"is a magic number";
else
cout<<"screw you, enter a magic number"<<endl;
		return 0;
}
