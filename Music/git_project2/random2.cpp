#include <stdio.h>
#include<iostream>
#include<string.h>
struct student
{
	char name[50];
	int pay;
};
typedef struct student stud;
int main(void) {
stud emp[100];
char stfu[50];// your code goes here
int N,i=0,j=0,pay;
scanf("%d",&N);
while(N!=0)
{
	gets(stfu);
	strcpy(emp[i].name,stfu);
	scanf("%d",&pay);
	emp[i].pay =pay;
	printf("%d",N);
N--;
}
	return 0;
	
}

