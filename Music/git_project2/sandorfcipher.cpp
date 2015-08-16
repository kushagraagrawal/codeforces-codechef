#include<stdio.h>
int stlen(char a[]);
void pad(char a[] ,int);
void reverse(char a[]);
void rotate(char a[],)

int main()
{	int i;
	char a[40];
	scanf("%s",a);
	int c= stlen(a);
	
	pad(a,c);
	
	reverse(a);
	rotate(a,)
	char b[6][6],d[6][6] = {0};
return 0;	
}
int stlen(char a[])
{
	int len=0;
	int i=0;
	while(a[i]!='\0')
	{
		len++;
		i++;
	}
return len;
}
void pad(char a[],int len)
{	int i;
	for(i=len;i<36;i++)
	a[i] = '#';
	
}
void reverse(char a[])
{	int i,j;
	char temp;
	for(i = 0,j=35;i<18,j>17;i++,j--)
		{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	
	
}
void rotate(char a[],char b[][6],char c[][6])
{
	c[0][1]=c[0][3]=c[0][5]=c[1][4]=c[2][2]=c[3][1]=c[3][4]=c[4][5]=c[5][3]=1;
	int j=0,k,t;
	for(k=0;k<6;k++)
	{
	for(t=0;t<6;t++)
	{
		if(c[k][t]==1)
		b[k][t]=a[j++];
	}
	// to rotate by 90 degrees clockwise, row i corresponds to column n-1-i and column j corresponds to j row
}
