#include<bits/stdc++.h>
using namespace std;
void reverse(char a[],int, int);
int main()
{
	int Q,b,c;
	char a[1000];
	cin>>a;
	cin>>Q;
	while(Q--)
	{
		cin>>b>>c;
		reverse(a,b,c);
		cout<<a<<endl;
	}
	return 0;
}
void reverse(char a[],int b, int c)
{
	char temp;
	int i=b;
	int j=c;
	while(i<j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
