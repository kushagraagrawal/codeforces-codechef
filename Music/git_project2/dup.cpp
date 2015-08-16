#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000],b[1000];
	scanf("%s",a);
	int i=0,j=0,c=strlen(a);
	for(i=0;i<c;i++)
	{
		if(a[i]!=a[i+1])
		b[j++]=a[i];		
		
	}
	printf("%s",b);
	
	
}
