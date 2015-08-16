#include<iostream>
#include<string>

using namespace std;
int main()
{ char a[80];
int b;
cout<<"enter the string";
cin.getline(a,80);
b= strlen(a);
cout<<b;
return 0;
}
