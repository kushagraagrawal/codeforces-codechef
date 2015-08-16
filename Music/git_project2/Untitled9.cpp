#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the number of numbers you want to input";
	cin>>a;
	int b[a];
	for (int i=0;i<a;i++)
	{cin>>b[i];
	}
cout<<"output";
for(int j=0;j<a;j++)
{if (b[j]==42)
break;
else cout<<b[j]<<endl;
}
return 0;


}


