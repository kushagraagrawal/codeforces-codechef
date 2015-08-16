#include<bits/stdc++.h>
using namespace std;
long int reverse(long int a[],long int,long int,long int);
long int a[100000];
int main()
{
	long int c,b,pos;
	int T;
	cin>>T;
	while(T--)
	{
		cin>>c>>b;
		for(long int i=0;i<c;i++)
		a[i] = i;
		for(long int j=0;j<c;j++)
		{
			pos = reverse(a,j,b,c);
		}
		cout<<pos<<endl;
	}
return 0;	
}
long int reverse(long int a[],long int j,long int b,long int c)
{
	long int size = c-j;
	long int temp;
	for(long int i=j,k=c-1;i<k;i++,k--)
	{
		temp = a[i];
		a[i]=a[k];
		a[k]=temp;
	}
for(long int l=0;l<c;l++)
{
	
	if (a[l]==b)
	return l;
}	


	
}
/*
for all testcases, from github
#include<iostream>
using namespace std;

int pos[100000];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		for (int i = 0, j = n - 1; i < n; i += 2, j--) pos[j] = i;
		for (int i = 1, j = 0; i < n; i += 2, j++) pos[j] = i;
		cout << pos[k] << endl;
	}
	return 0;
}
*/
