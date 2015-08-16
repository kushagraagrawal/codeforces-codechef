#include<stdio.h>
int check(int);
main()
{
    int N;


    printf("\n Enter the N:");
    scanf("%d",&N);
    if(check(N))
    {
        printf("\n[%d] Perfect Square:\n",N);

    }

    else
    {

        printf("\nNot perfect Square\n");

    }
}
int check(int n)
{
    int i=1;

    while(n>0)
    {
        n-=i;
        printf("[%d]",n);
        i+=2;
    }
    if(n==0)
        return 1;

    return 0;

}
