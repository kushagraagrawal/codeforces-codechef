#include <iostream>
using namespace std;
 
int main() {
	long long int a[1000001]={0};
	int b,num;
	cin>>b;
	while(b--)
	{
	cin>>num;
	a[num]++;
	}
	for(int i=0;i<1000001;i++)
	{
	while(a[i]>0)
	{cout<<i<<"\n";
	a[i]--;}}
	return 0;
 
 }
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int j,i=0,t,N;
	cin>>t;
	long long int a[t];
	while(t--)
	{
		cin>>N;
		a[i] = N;
		i++;
	}
	sort(a,a+i+1);
	for(j=0;j<i;j++)
	cout<<a[j]<<endl;
	return 0;
}*/
