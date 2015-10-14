#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int temp1,temp2,i,s,n;
	int flag = 1;
	cin>>s>>n;
	for (i=0;i<n;i++)
	{
		cin>>temp1>>temp2;
		if(s>temp1)
		{
			s+=temp2;
		}
		else
		{
			//cout<<"NO";
			flag = 0;
			break;
		}
	
	}
if (flag==1)
cout<<"YES";
else
cout<<"NO"<<endl;
return 0;

}
