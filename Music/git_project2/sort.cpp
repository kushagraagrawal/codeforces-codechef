#include<bits/stdc++.h>
using namespace std;


int main()
{
	int a[1000],temp=0;
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	cin>>a[i];
	int min = a[0];
	for (int j=0;j<N;j++)
	{
		for(int k=j+1;k<N;k++)
		{
			if(a[k]<=a[j])
			min = a[k];
		}
	temp = a[j];
	a[j]=min;
	min = temp;
	
	}
	for(int l=0;l<N;l++)
	cout<<a[l]<<" ";
	
	return 0;
}
