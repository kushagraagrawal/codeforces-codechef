#include<stdio.h>
 
int main()
{
 int i=0,j=0,n=0,l=0,s=0,max=0;
 long long int w[1001];
 char coa[1000],cha[1000];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {	scanf("%d",&l);
	scanf("%s",coa);
	scanf("%s",cha);
	s=0;
	for(j=0;j<=l;j++)
		scanf("%lld",&w[j]);
	for(j=0;j<l;j++)
		if(coa[j]==cha[j])
			s++;
	max=w[0];
	for(j=1;j<=s;j++)
		if(max<w[j])
			max=w[j];
	if(s==l)
		max=w[s];
	printf("%d \n",max);
 }
 return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,N;
	string a,b;
	cin>>T;
	while(T--)
	{
		int i,count=0,max = 0;
		cin>>N;
		cin>>a>>b;
		vector <long long int> s(N);
		for(i=0;i<=N;i++)
		cin>>s[i];
		for(i=0;i<N;i++)
		{
			if(a[i]==b[i])
			count++;	
		}
		max = s[0];
		for(i=1;i<=count;i++)
		if(max < s[i])
		max = s[i];
		if(count == N)
		max = s[count];
		cout<<max;
	}
return 0;
}*/
