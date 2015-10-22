#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int n,i,j,a[25],sum1=0,sum2=0,sum3=0,temp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(j=0;j<n;j+=3)
	{
		sum1 += a[j];
	}
	for(j=1;j<n;j+=3)
	{
		sum2 += a[j];
	}
	for(j=2;j<n;j+=3)
	{
		sum3 += a[j];
	}
	temp = max(sum1,max(sum2,sum3));
	if (temp == sum1)
	cout<<"chest"<<endl;
	else if(temp==sum2)
	cout<<"biceps"<<endl;
	else
	cout<<"back"<<endl;
	return 0;

}
