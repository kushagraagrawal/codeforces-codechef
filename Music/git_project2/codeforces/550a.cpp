#include<bits/stdc++.h>
using namespace std;
int main()
{

	char a[100001],temp[3];
	long int i,j,k,flag1=0,flag2=0;
	cin>>a;
	for(i=0;i<strlen(a);i++)
	{j=0;
		for(k=i;k<i+2;k++)
		{
			temp [j] = a[k];
			j++;
		}
		temp[j] = '\0';
		
		if (strcmp(temp,"BA")==0&&flag2==0)
		{
			a[i] = 'X';
			a[i+1] = 'X';
			flag2 = 1;
		}
	else if (strcmp(temp,"AB") == 0 && flag1==0)
		{
			a[i] = 'X';
			a[i+1] = 'X';
			flag1=1;
		}
		
		
		}
		
		//cout<<flag1<<flag2;
		if (flag1 && flag2)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
return 0;
}
