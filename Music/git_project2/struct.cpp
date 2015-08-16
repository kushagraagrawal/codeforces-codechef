#include<bits/stdc++.h>
using namespace std;
struct student
{
	char a[1000];
	int pay;
};

int main()
{
struct student std[10];
for(int i=0;i<10;i++)
{
	scanf("%s",std[i].a);
	scanf("%d",&std[i].pay);
	
}	
int hike = 20;
int thresh = 100;
for(int j=0;j<10;j++)
{
	if(std[j].pay<thresh)
	std[j].pay+=((std[j].pay*hike)/100);
}	
for(int k=0;k<10;k++)
{
	printf("%s %d\n",std[k].a,std[k].pay);
}
}
