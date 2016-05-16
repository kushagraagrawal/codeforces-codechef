#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int cnt =0;
	for(int i=1;i<=1000;i++)
	{
		int temp=i,ans=0,num=0;
		while(temp)
		{
			ans =ans*10 +temp%10;
			temp/=10;
			num++;
		}
		int s;
		while(num--)
		{
			s=ans%10;
			ans/=10;
			cnt++;
			if(cnt>=n)
			{
				cout<<s<<"\n";
				return 0;
			}
		}
	}
return 0;
}
