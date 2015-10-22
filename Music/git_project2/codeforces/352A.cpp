#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[1000];
	int b[2] = {0},n,i=0;
	cin>>n;
	for (;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==0)
		b[0]++;
		else
		b[1]++;
		
	}
	if (b[1]>=9 && b[0]>0)
	{
		for(int k = 0; k < b[1] / 9; k++){cout<<"555555555";}
        for(int k = 0; k < b[0]; k++){cout<<"0";}
        cout<<endl;
	}
	else if(b[0] > 0)
	cout<<"0";
	else
	cout<<"-1";
	return 0;
	
	
	
}
