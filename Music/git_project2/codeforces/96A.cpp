#include<bits/stdc++.h>
using namespace std;
int main()
{
	char i,a[101],temp[8];
	int j=0,k,flag=0;
	cin>>a;
	for(i=0;i<strlen(a);i++)
	{	j=0;
		k=i;
		while(k<i+7)
		{
			temp[j] = a[k];
			j++;
			k++;
		}
		temp[j] = '\0';
		//cout<<temp;
		if(strcmp(temp,"1111111")==0 || strcmp(temp,"0000000")==0)
		{
			flag=1;
			cout<<"YES";
			break;
		}
	}
	if (flag==0)
	cout<<"NO"<<endl;
	return 0;
}
