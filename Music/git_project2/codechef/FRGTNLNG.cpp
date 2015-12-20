#include <iostream>
#include<cstring>
using namespace std;
int main() 
{
	int T,n,k,l;
	cin>>T;
	char word[101][6],phrase[6];
	bool  dict[101];
	for(int i=0;i<101;i++)
		dict[i]=false;
	while(T)
	{
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>word[i];
		}
		for(int i=0;i<k;i++)
		{
			cin>>l;
			for(int j=0;j<l;j++)
			{
				cin>>phrase;
				for(int m=0;m<n;m++)
				{
					if(strcmp(phrase,word[m])==0)
					{
						dict[m]=true;
					}
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			if(dict[i]==true)
			{
				cout<<"YES ";
				dict[i]=false;
			}
			else
			cout<<"NO ";
		}
		cout<<'\n';
		T--;
	}
	return 0;
}  


