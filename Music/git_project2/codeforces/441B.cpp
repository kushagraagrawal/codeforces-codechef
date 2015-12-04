#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,v,i;
	vector<long int> fruit(3002,0);
	int temp1,temp2;
	cin>>n>>v;
	for(i=0;i<n;i++)
	{
		cin>>temp1>>temp2;
		fruit[temp1]+=temp2;
	}
	long int carry = 0;
	for(i =1;i<=3001;i++)
	{
		fruit[i] +=carry;
		if(fruit[i] > v)
	{
		carry = fruit[i] - v;
		fruit[i] = v;
	}
	else
	{
		carry = 0;
	}	
	if(carry > v)
	carry = v;
	}
	long int total = 0;
	for(i=0;i<fruit.size();i++)
	total+=fruit[i];
	cout<<total<<endl;
	return 0;
}
