#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,n,temp=1,m,a[3000],flag = 1;
	cin>>n>>m;
	for(i=0;i<m;i++)
	cin>>a[i];
	sort(a,a+m);
	if (a[0] == 1 || a[m-1] == n)
	cout<<"NO"<<endl;
	else
	{
		for(i=0;i<m-2;i++)
		{
			if(a[i+1] == a[i] + 1 && a[i+2]==a[i] + 2)
			{
				cout<<"NO"<<endl;
				flag = 0;
				break;	
			}
		}
		if (flag ==1)
		cout<<"YES"<<endl;
	
	}	
	return 0;
}
