#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int i,n,manPwr = 0 ,untreated = 0;
	cin>>n;
	while (n--)
	{
		int input = 0;
		cin>>input;
		if(input <0)
		{
			(manPwr>0) ? (--manPwr) : (++untreated);
		}
		else
		manPwr += input;
	
	}
	cout<<untreated;
	return 0;

}
