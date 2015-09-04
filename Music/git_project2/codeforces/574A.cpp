#include<bits/stdc++.h>
#include <iterator> 
#include<algorithm>
using namespace std;
int main()
{
	int i,n,a[1000],temp,*temp2,count=0,flag = 0;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	temp = *max_element(a,a + n);

	if (temp == a[0])
	{
		for(i=1;i<n;i++)
		{
			if (a[0] == a[i])
			flag = 1;
		}
		if (flag == 1)
		cout<<"1"<<endl;
		else
		cout<<"0"<<endl;
	}
	else
	{
		while (1)
		{
			temp2 = std::find (a, a+n, temp);
			count++;
			a[0]++;
			*temp2 = *temp2 - 1;
			//cout<<temp<<endl;
			//cout<<*temp2<<endl;
			if (a[0] == *max_element(a,a+n))
			{
				break;
			}
			else
			{temp = *max_element(a,a+n);
			temp2 = find (a, a+n, temp);
		}
		}	
	for(i=1;i<n;i++)
	{
		if(a[0] == a[i])
		{
			count++;
			break;
		}
	}
	cout<<count<<endl;
	}
return 0;
}
