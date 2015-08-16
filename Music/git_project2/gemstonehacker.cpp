#include<bits/stdc++.h>
using namespace std;
char a[100];
int main()
{	int c;

	int T;
	cin>>T;
	
	int count = 0,count2;
	int temp = T;
	char d[26][10]={0};
	while(T--)
	{
		cin>>a;
		c = strlen(a);
		for(int l = 0;l<temp;l++)
		{
		for (int i=0;i<c;i++)
		{
			if(a[i]>='a'&&a[i]<='z')
			d[a[i] - 'a'][l] += 1; 
		}}
		
		
	}
	for(int j = 0;j<26;j++)
	{
	for(int k=0;k<temp;k++)
	{
		if(d[j][k]>0)
		count2++;
		cout<<d[j][k]<<" ";
	}
	cout<<"\t";
}
	/*if(count2 == temp)
	count++;
	
	cout<<count<<endl;*/
	return 0;
	
}
