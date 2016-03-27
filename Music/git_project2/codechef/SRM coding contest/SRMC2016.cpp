#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
/* Iterative function to reverse digits of num*/
long long int reversDigits(long long int num)
{
    long long int rev_num = 0;
    while(num > 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    return rev_num;
}
 
/*Driver program to test reversDigits*/
int main()
{
    int num = 120;
    long long int T,N;
    scanf("%lld",&T);
    while(T--)
    {
    	scanf("%lld",&N);
    	printf("%lld\n", reversDigits(N));	
	}
    //printf("Reverse of no. is %d", reversDigits(num));
 
    getchar();
    return 0;
}
