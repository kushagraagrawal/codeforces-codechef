#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main() {
       char a[81];
    int l,q,w;
    cin.getline(a,81);
    l=strlen(a);
    float b=sqrt(l);
    int o=ceil(b),c;
    int d=floor(b);
    for(int i=1;i<=b;i++)
        {
        c=l/i;
        if(d<=i<=c<=o)
            {q=i;
            w=c;
            }
			
    }
    char p[q][w];
    int m=0,j,k,n,u;
    for(j=0;j<q;j++)
    {
        {
        for(k=0;k<w;k++,m++)
            p[j][k]=a[m];
        }
    }
    for(n=0;n<w;n++)
        {
        for(u=0;u<q;u++)
            {
            cout<<p[u][n];
        }
        cout<<" ";
    }
    
    
    
    return 0;}
