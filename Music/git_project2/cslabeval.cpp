#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
char col[100];
char col2[10];
char col3[10];
char temp[10];

gets(col);
gets(col2);
gets(col3);

int i=0,j=0,l=0,k=0;
while(col[i]!='\0')
{
k=i;    
    while(col[i]!=' '&&col[i]!='\0')
    {
        temp[j]=col[i];
        i++;j++;
    }
temp[j]='\0';
if((strcmp(temp,col2))==0)
{
while(col3[l]!='\0')
col[k++]=col3[l++];

}
if(col[i]==' ')
i++;
j=0;l=0;
}
puts(col);
printf("\n");
return 0;
}
