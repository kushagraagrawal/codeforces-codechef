#include<stdio.h>
#include<math.h>
int reverse(int a)
{
int digits=0,sum=0,c;
int b=a;
while(b--)
{
digits++;
b/=10;
}
while(a)
{
c=a%10;
a=a/10;
sum+=(c*pow(10,--digits));
}
return sum;
}
int main()
{
int a,b;
scanf("%d",&a);
b=reverse(a);
printf("%d",b);
return 0;
}
