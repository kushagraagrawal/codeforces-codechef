#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char arr[82];
    int len,skip,i,j;
    scanf("%s",arr);
    len= strlen(arr);
    skip= ceil(sqrt(len));
    
    for(j=0; j<skip; j++)
    {for(i=j; i<len; i+=skip)
            printf("%c",arr[i]);
     printf(" ");
    }
     return 0;
}
