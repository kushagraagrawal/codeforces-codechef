#include <stdio.h>


int main(void){   
char s[]={'a','b','c','\n','c','\0'};
char *p,*str,*str1;
p=&s[3];
str1=s;
printf("5d",++*p + ++*str1-32);

 
    return 0;}

