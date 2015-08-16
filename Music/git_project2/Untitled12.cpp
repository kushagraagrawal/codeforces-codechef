#include <iostream>
#include<string.h>
using namespace std;
char a[100000];
int main() {
	int T,count;
	cin>>T;
	while(T--)
	{
		count = 0;
		cin>>a;
		int i=0;
		while(a[i]!='\0')
		{
			if(a[i]==a[i+1])
			count++;
			i++;
		}
		cout<<count<<endl;
	}// your code goes here
	return 0;
}
