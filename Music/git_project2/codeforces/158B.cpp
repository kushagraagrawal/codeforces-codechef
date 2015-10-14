#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int i,n,count=0;
	int a[100000],b[5] = {0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]]++;
	}
count = b[4];
b[4] = 0;
count+= b[1]/4;
b[1] -= b[1]/4;
count+= b[2]/2;
b[2] -= b[2]/2;
for (i=1;i<5;i++)
cout<<b[i]<<" ";


/*for (i=1;i<=3;i++)
{
	

}*/
return 0;
}
