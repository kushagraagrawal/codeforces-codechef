#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int temp,count=0,count1=0;
	cin>>n;
	for (int i=0;i<n;i++)
	{	count1=0;
		
		for (int j=0;j<3;j++)
		{
			cin>>temp;
			if(temp==1)
			count1++;
		}
		if (count1>=2)
		count++;
	}
cout<<count<<endl;
return 0;

}
