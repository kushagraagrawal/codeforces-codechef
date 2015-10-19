#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int a[5000],temp,flag = 0,tem2,temp1=0,temp2=0,temp3=0;
	int b[4] = {0},i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]]++;
	}
	for(i=1;i<4;i++)
	{
		//cout<<b[i]<<" ";
		if(b[i]==0)
		{
			flag = 1;
		}
	}
	//cout<<flag<<endl;
	if(flag ==0)
	{
	temp = *min_element(b+1,b+4);
	tem2 = temp;
	cout<<temp<<endl;
	while(tem2--)
	{
		for (i=0;i<n;i++)
		{
			if(a[i]==1)
			{
				temp1 = i+1;
				a[i] = 0;
				break;		
			}
		}
		for (i=0;i<n;i++)
		{
			if(a[i]==2)
			{
				temp2 = i+1;
				a[i] = 0;
				break;
			}
		}
		for (i=0;i<n;i++)
		{
			if(a[i]==3)
			{
				temp3 = i+1;
				a[i] = 0;
				break;
			}
		}
	cout<<temp1<<" "<<temp2<<" "<<temp3<<endl;
	}
	
	
}
	else
	cout<<"0";
	//cout<<temp;

}
