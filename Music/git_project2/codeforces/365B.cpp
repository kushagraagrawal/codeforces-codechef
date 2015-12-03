#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int i,best = 0,previousA = 0,current = 0, previousB = 0,total = 0;
	for(i=0;i<n;i++)
	{
		previousB = previousA;
		previousA= current;
		cin>>current;
		if (current == previousA + previousB || total <=1)
		{
			++total;
			if (total > best)
			best = total;
		}
		else
		total = 2;
	}
	cout<<best<<endl;
	return 0;
}
