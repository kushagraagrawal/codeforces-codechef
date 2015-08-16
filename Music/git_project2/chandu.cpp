#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,i,j;
	cin>>T;
	char a[31];
	while(T--)
	{
		j=0;
 		cin>>a;
 		i=strlen(a);
	 	
		 while(j<i)
	 	{
	 		if(a[j]==a[j+1])
	 		{
	 			
				for(int k=j;k<i;k++)
	 			a[k]=a[k+1];
	 			i--;
	 			
			 }
	 		else
	 		j = j+1;
	 	}
	 cout<<a<<endl; }
	
return 0;
}

