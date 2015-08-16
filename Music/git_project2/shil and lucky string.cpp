#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	char a[100000];
	long long int N,i,j,count1=0,count2=0;
	cin>>N;
	cin>>a;
	//long int b[26] = {0} , c[26] = {0};
	for (i = 0, j = N/2; i < (strlen(a)/2),j<strlen(a) ; i++,j++)
	{
		if (a[i] - a[j] == 0)
		continue;
		else if(a[i] - a[j]<0)
		count1++;
		else if(a[i] - a[j] > 0)
		count2++;
	}
	i = abs(N/2 - count1);
	j = abs(N/2 - count2);
	if(count1!=0 || count2!=0)
	cout<<min(i,j);
	else if(count1 == 0 &&count2 == 0)
	cout<<"0";
	/*for(i=0;i<26;i++)
	{
		
	}*/
	
	return 0;
}
