/*#include <iostream>
#include <cstdio>
using namespace std;
 
int main()
{
    char c='\0';
    int j=0,k=0,l=0,m=0;
    while(c!='\n')
    {
        scanf("%c",&c);
        if(c=='C')
            j++;
        else if(c=='H' && j>k)
            k++;
        else if(c=='E' && k>l)
            l++;
        else if(c=='F' && l>m)
            m++;
 
 
    }
    cout<<m<<endl;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	long int j=0,k=0,l=0,m=0;
	char s = '\0';
	while(s!='\n'){
		scanf("%c",&s);
		if(s=='C')
		j++;
		else if(s=='H' && j>k)
		k++;
		else if(s=='E' && k>l)
		l++;
		else if(s=='F' && l>m)
		m++;
	}
	cout<<m<<endl;
	return 0;
}
