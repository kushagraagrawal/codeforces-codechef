#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i;
	cin>>n;
	vector <long long> beauty(n);
	for (i=0;i<n;i++)
	{
		cin>>beauty[i];
	}
	sort(beauty.begin(),beauty.end());
	long long min = beauty[0];
	long long max = beauty[n -1];
	long long countMin(0) , countMax(0),k;
	long long ways(1);
	if (min == max)
	ways *= n * (n-1) / 2;
	else
	{
		for (k = 0;k<n;k++)
		{
			if(beauty[k]==min)
			++countMin;
			else
			break;
		}
		for(k=n-1;k>=0;k--)
		{
			if (beauty[k]==max)
			++countMax;
			else
			break;
		}
		ways*= countMin*countMax;
	}
	cout<<max - min<<" "<<ways<<endl;
	return 0;
}
