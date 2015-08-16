#include<stdio.h>
int main()
{int a[50],n,count=0,i,j,k,b=0,T;
scanf("%d",&T);
while(T--)
{
scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    for(j=0;j<n;j++)
    {
    count=1;
        for(k=(j+1);k<n;k++)
        {
            if(a[j]==a[k])
            {
            count++;
            }
            
        
        }
        if(count%2!=0)
        {
        printf("%d\n",a[j]);
                break;
                }

    }
}

return 0;
}
