#include<stdio.h>
int sum(int n)
{
int r,sum=0;
while(n!=0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
return sum;
}
int main(void)
{
int t,a,b,i;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
scanf("%d",&a);
b=sum(a);
printf("%d\n",b);
}
return 0;
} 
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	string s;
	cin>>T;
	while(T--)
	{
		cin>>s;
		for(int i= s.size() -1;i>=0;i--)
		{
			cout<<s[i];
		}
		cout<<endl;
	}
return 0;
}*/
