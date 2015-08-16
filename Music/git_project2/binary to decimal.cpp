#include<iostream>
#include<cmath>
using namespace std;
int main()
{int a,b,c=1;
int count=0,sum=0;

cout<<"enter the number in binary";
cin>>a;
b=a;
do
{c=b%10;

b=b/10;
count+=1;
if (c==1)
sum= sum+ pow(2,(count-1));
}while(b);
cout<<(count)<<endl;
cout<<"the number in decimal is"<<sum<<endl;
return 0;

}
