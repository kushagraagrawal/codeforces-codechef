#include <iostream>
using namespace std;
int main()
{
	int t,n,l[1000],r[1000],in,rt,temp,max,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			cin>>l[i];
		for(i=0;i<n;i++)
			cin>>r[i];
		max=0;rt=0;
		for(i=0;i<n;i++)
		{
			temp=l[i]*r[i];
			if(temp>max)
			{
				max=temp;
				in=i;
				rt=r[i];
				in=i;
			}
			if(temp==max)
			{
				if(rt<r[i])
				{
					rt=r[i];
					in=i;
				}
			}
		}
		cout<<in+1<<endl;
	}
	return 0;
} 
