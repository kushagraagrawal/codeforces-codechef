#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
      int T,i;
      char Sa[99999];
      char Tmp;
      int delcount=0;
      scanf("%d",&T);
      while(T>0)
      {
           delcount=0;
           scanf("%s",Sa);
           Tmp=Sa[0];
           for(i=1;Sa[i]!='\0';i++)
           {
                if(Tmp==Sa[i])
                delcount++;
                else
                {
                     Tmp=Sa[i];
                }
           }
           printf("%d\n",delcount);
           T--;
      }
      return 0;
}

