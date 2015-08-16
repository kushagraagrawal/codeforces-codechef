#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <strings.h>
using namespace std;
int count[26]={0};

void f1(char s[])
{  long int c=0;
   while ( c<=strlen(s) )
    { 
      if ( s[c] >= 'a' && s[c] <= 'z' ) 
         ::count[s[c]-'a']=1;
         else 
		 	if( s[c] >= 'A' && s[c] <= 'Z' )
		 		::count[s[c]-'A']=1;
      c++;
   } 
}

int main() {
    char s[1000];
    int N;
    cin>>N;
    cin>>s;
    int flag=0,i;
    f1(s);
    for(i=0;i<26;i++)
    {    if(::count[i]!=1)
            flag=1;
    }
     if(flag==1)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    
return 0;
}
