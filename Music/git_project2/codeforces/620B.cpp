#include<bits/stdc++.h>
using namespace std;
int main(){
	long int temp2,temp,i,l,m,ans=0;
	int a[] = {6,2,5,5,4,5,6,3,7,6};
	cin>>l>>m;
	for(i=l;i<=m;i++)
	{
		temp = i;
		while(temp>0)
		{
			
			ans += a[temp%10];	
			temp /= 10;
		}
	}
	cout<<ans<<endl;
	return 0;
}
