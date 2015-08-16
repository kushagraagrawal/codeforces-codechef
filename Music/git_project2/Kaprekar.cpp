#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    long int p,q,len,p1,p2,sq,temp;
    int i,count=0;
    scanf("%u",&p);
    scanf("%u",&q);
    len=q-p;
    long int a[q-p];
    int d[q-p];
    for(i=0;i<=len;i++)
        {
            a[i]=p;
            p++;
        }
    for(i=0;i<=len;i++)
        {
            temp=a[i];
            while(temp>0)
                {
                    temp=temp/10;
                    count++;
                }
            d[i]=count;
            count=0;
        }
    for(i=0;i<=len;i++)
        {
            sq=(a[i]*a[i]);
            p1=sq/pow(10,(d[i]));
            p2=sq-(p1*pow(10,(d[i])));
            if((p1+p2)==a[i])
                {
                    printf("%u ",a[i]);
                    count=1;
                }
            else if(a[i]==1)
                {
                    printf("1 ");
                    count=1;
                }
            else
               {
                    continue;
                }
        }
        if(count!=1)
            {
                printf("INVALID RANGE");
            }
    return 0;
}
