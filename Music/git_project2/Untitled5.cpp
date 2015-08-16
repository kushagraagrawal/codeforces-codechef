#include<iostream>
using namespace std;
int main()
{char a[10];
cout<<"enter the word";
cin>>a;
cout<<a;
for(int i=0;i<10;i++)
{for(int j=0;j<=i;j++)
{cout<<a[j];}cout<<endl;}
return 0;
}
