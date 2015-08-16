#include<stdio.h>

int main()

{

        int a = 0, b = 0, c = 0, d = 0;

        if(a && b++)

                        printf("%d %d",a++, b);

         printf("%d %d ",a,b);

        if(c++ && d++)

                        printf("%d %d",c++,d++);

        printf("%d %d",c,d);

        return 0;

}
