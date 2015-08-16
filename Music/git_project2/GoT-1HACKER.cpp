#include<bits/stdc++.h>
using namespace std;
char a[100000];
int main()
{	int index,c,count1=0,count2=0;
	char b[26] = {0};
	cin>>a;
	c = strlen(a);
	for(int i=0;i<c;i++)
	{
		index = a[i] - 'a'; 
		b[index] += 1;
		
	}
	
		for(int j = 0;j<26;j++)
		{
			if(b[j]%2==0)
			count1++;
			else
			count2++;
		}
		if (count2<2)
		cout<<"YES";
		else
		cout<<"NO";
		
	
	
	
	
	return 0;
	
}
