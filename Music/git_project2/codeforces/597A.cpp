#include<bits/stdc++.h>
using namespace std;
int main(){
	 int i,lower,upper,k,count=0,a,b;
	
	cin>>k>>a>>b;
	/*
	lower = (a + k - 1) / k;
	upper = b / k;
	cout<< upper - lower + 1;*/
	lower = a % k;
	if (lower!=0)
	a+= (k - lower);
	b-= b%k;
	cout<< max((b-a) / (k+1) , 0);
	/*if (k==1)
	{
		cout<<b - a + 1;
	}
	else{
	
	for (i=a;i<=b;i++)
	{
		if (i%k==0)
		{
			temp2 = i;
			break;
		}
	}
	for (temp = temp2;temp<=b;temp += k)
	{
		count++;
	}
cout<<count<<endl;
}
*/
return 0;
}
